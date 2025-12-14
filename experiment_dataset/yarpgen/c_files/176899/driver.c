#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 96300590U;
unsigned int var_2 = 916698864U;
unsigned short var_3 = (unsigned short)600;
int var_5 = 1780636773;
unsigned int var_7 = 2239421556U;
signed char var_11 = (signed char)-124;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 11544720499258061882ULL;
signed char var_17 = (signed char)57;
int zero = 0;
int var_18 = -1062374064;
unsigned char var_19 = (unsigned char)168;
int var_20 = -1167434560;
unsigned int var_21 = 1426858378U;
unsigned char var_22 = (unsigned char)26;
long long int arr_7 [12] [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 3474840203205542410LL : -6260882548117918898LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_7 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
