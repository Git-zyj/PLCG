#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3365628764U;
unsigned int var_1 = 705340496U;
int var_2 = -291334184;
_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)149;
_Bool var_5 = (_Bool)0;
unsigned char var_6 = (unsigned char)84;
long long int var_7 = 6973137525156498944LL;
int var_8 = -7874339;
long long int var_9 = -5599799200545299956LL;
_Bool var_10 = (_Bool)1;
long long int var_11 = 4194213105250520257LL;
unsigned int var_12 = 1877273006U;
unsigned int var_13 = 742760684U;
_Bool var_14 = (_Bool)1;
long long int var_16 = 4948106954536963828LL;
int var_17 = -899001760;
int zero = 0;
unsigned int var_18 = 592163650U;
unsigned int var_19 = 3920782544U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
