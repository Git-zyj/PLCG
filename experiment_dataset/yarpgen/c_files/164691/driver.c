#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 72388890U;
unsigned long long int var_3 = 12158757283492766655ULL;
unsigned long long int var_8 = 15731080090829501533ULL;
unsigned char var_9 = (unsigned char)186;
unsigned long long int var_11 = 6731507227808729096ULL;
unsigned char var_14 = (unsigned char)144;
unsigned char var_15 = (unsigned char)121;
int var_17 = 1154738357;
int zero = 0;
unsigned char var_19 = (unsigned char)141;
unsigned long long int var_20 = 8357257090231295523ULL;
int var_21 = -825553699;
unsigned long long int var_22 = 4144401540856435869ULL;
unsigned short var_23 = (unsigned short)49113;
unsigned char var_24 = (unsigned char)152;
unsigned char arr_1 [24] ;
long long int arr_5 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned char)13 : (unsigned char)39;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -7058170281720905047LL : -5877421271774826510LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
