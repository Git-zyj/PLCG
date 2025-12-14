#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2115722741U;
unsigned char var_6 = (unsigned char)130;
short var_9 = (short)13043;
unsigned long long int var_10 = 3695693714921121265ULL;
unsigned char var_11 = (unsigned char)156;
int zero = 0;
unsigned short var_12 = (unsigned short)58117;
int var_13 = 657192150;
unsigned short var_14 = (unsigned short)6993;
signed char var_15 = (signed char)25;
unsigned int arr_2 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 1038342013U : 3186099843U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
