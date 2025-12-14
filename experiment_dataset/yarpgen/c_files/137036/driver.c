#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4495698622861265519ULL;
_Bool var_1 = (_Bool)1;
unsigned short var_2 = (unsigned short)38990;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 1946548362372727608ULL;
short var_5 = (short)18944;
long long int var_6 = 437112577379431720LL;
signed char var_8 = (signed char)112;
unsigned int var_9 = 656691756U;
long long int var_10 = 912430571482827885LL;
signed char var_11 = (signed char)22;
signed char var_12 = (signed char)36;
unsigned long long int var_13 = 15388819273243379549ULL;
unsigned long long int var_14 = 16694984966180623220ULL;
long long int var_15 = 9028607142882093150LL;
int zero = 0;
int var_16 = 1830717759;
long long int var_17 = -1648474875663692384LL;
long long int var_18 = 2671109544518504936LL;
unsigned int var_19 = 3169844458U;
signed char var_20 = (signed char)11;
short arr_9 [21] [21] [21] [21] ;
unsigned long long int arr_10 [21] [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (short)25294 : (short)1749;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 5096661186843503821ULL : 11460539495786299748ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    hash(&seed, arr_9 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    hash(&seed, arr_10 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
