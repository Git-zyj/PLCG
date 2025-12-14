#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)133;
_Bool var_10 = (_Bool)1;
unsigned char var_11 = (unsigned char)83;
int var_12 = -79566515;
_Bool var_13 = (_Bool)1;
int zero = 0;
int var_14 = -1321822639;
unsigned char var_15 = (unsigned char)252;
long long int var_16 = 5007171167710081792LL;
signed char var_17 = (signed char)-24;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
