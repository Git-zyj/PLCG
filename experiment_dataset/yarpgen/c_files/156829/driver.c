#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)23736;
unsigned short var_1 = (unsigned short)21566;
long long int var_2 = -3569115117107797818LL;
signed char var_3 = (signed char)-116;
_Bool var_4 = (_Bool)1;
long long int var_5 = -920777788191252202LL;
_Bool var_6 = (_Bool)0;
short var_8 = (short)21125;
unsigned long long int var_10 = 11123711975181235661ULL;
unsigned long long int var_11 = 15710112996024177988ULL;
_Bool var_12 = (_Bool)1;
short var_14 = (short)1951;
short var_15 = (short)-17625;
signed char var_16 = (signed char)-121;
_Bool var_18 = (_Bool)1;
int zero = 0;
short var_19 = (short)-32491;
signed char var_20 = (signed char)79;
short var_21 = (short)24171;
signed char var_22 = (signed char)-29;
signed char var_23 = (signed char)-119;
long long int arr_11 [25] [25] [25] [25] ;
unsigned long long int arr_12 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? -2808891033580185092LL : 6773509536229738768LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 11477392752232019587ULL : 14310642943510640377ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    hash(&seed, arr_11 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
