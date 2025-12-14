#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1873061103;
int var_1 = 387295471;
long long int var_3 = 981102020993080597LL;
short var_4 = (short)-31145;
short var_5 = (short)29781;
int var_6 = -1460353478;
int var_7 = 396513658;
int var_8 = -330252996;
signed char var_9 = (signed char)-97;
unsigned int var_10 = 1712673644U;
int zero = 0;
unsigned long long int var_11 = 196481279953099139ULL;
unsigned long long int var_12 = 12584948630700205013ULL;
int var_13 = -639083884;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
