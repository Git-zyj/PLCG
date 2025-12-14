#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)204;
unsigned char var_2 = (unsigned char)94;
_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)210;
unsigned char var_6 = (unsigned char)219;
unsigned char var_7 = (unsigned char)173;
unsigned char var_8 = (unsigned char)66;
_Bool var_9 = (_Bool)1;
unsigned char var_11 = (unsigned char)110;
unsigned long long int var_13 = 17963268183551104792ULL;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned long long int var_16 = 4005519714407974921ULL;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)28;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
