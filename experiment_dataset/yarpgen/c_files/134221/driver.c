#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-27238;
long long int var_7 = 1955047264653677724LL;
unsigned short var_10 = (unsigned short)38558;
unsigned long long int var_14 = 10145785916813202854ULL;
unsigned short var_17 = (unsigned short)568;
int zero = 0;
long long int var_18 = -8259281258565410562LL;
int var_19 = 527659206;
unsigned short var_20 = (unsigned short)19048;
int var_21 = 539419759;
unsigned int var_22 = 3142096638U;
unsigned int arr_0 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 1845216420U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
