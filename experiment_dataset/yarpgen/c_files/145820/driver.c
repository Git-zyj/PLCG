#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4270626334783543009ULL;
unsigned int var_1 = 1972565679U;
_Bool var_3 = (_Bool)1;
unsigned short var_4 = (unsigned short)47598;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)4334;
int var_7 = 137470290;
unsigned int var_8 = 2941688674U;
unsigned short var_9 = (unsigned short)5410;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned short var_11 = (unsigned short)45670;
unsigned short var_12 = (unsigned short)6550;
unsigned short var_13 = (unsigned short)36511;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
