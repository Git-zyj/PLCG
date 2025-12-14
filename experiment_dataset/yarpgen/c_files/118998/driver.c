#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)129;
signed char var_3 = (signed char)16;
unsigned long long int var_4 = 5489826563571447532ULL;
short var_5 = (short)-28179;
unsigned int var_6 = 2999599532U;
long long int var_7 = -3217408878476843958LL;
long long int var_8 = -7830823028934255415LL;
_Bool var_9 = (_Bool)0;
long long int var_10 = 1638023106039722143LL;
unsigned long long int var_11 = 14344951771201172277ULL;
int zero = 0;
long long int var_12 = -106819646711510024LL;
long long int var_13 = 856776542184355313LL;
unsigned char var_14 = (unsigned char)221;
unsigned int var_15 = 2834945521U;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
