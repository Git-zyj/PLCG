#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -226589199906903639LL;
unsigned char var_7 = (unsigned char)98;
unsigned int var_8 = 2772417100U;
_Bool var_9 = (_Bool)1;
signed char var_13 = (signed char)-96;
_Bool var_14 = (_Bool)0;
unsigned int var_18 = 2736819255U;
int zero = 0;
_Bool var_20 = (_Bool)1;
short var_21 = (short)-27616;
int var_22 = 1116559876;
_Bool var_23 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
