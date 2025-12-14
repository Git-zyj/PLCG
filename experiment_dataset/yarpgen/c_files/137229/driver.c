#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)59858;
long long int var_8 = 5267271381644686224LL;
unsigned int var_9 = 1385339577U;
unsigned short var_11 = (unsigned short)4332;
long long int var_12 = -7036368172220512060LL;
unsigned short var_13 = (unsigned short)12626;
short var_15 = (short)-191;
short var_16 = (short)-24993;
int zero = 0;
unsigned short var_18 = (unsigned short)54767;
int var_19 = -25474445;
long long int var_20 = -4754007182999916548LL;
unsigned char var_21 = (unsigned char)229;
long long int var_22 = -7512763124989777399LL;
unsigned long long int arr_2 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 5568613105244333147ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
