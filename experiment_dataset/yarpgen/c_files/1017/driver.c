#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
int var_2 = 1364284890;
unsigned char var_4 = (unsigned char)78;
_Bool var_5 = (_Bool)0;
signed char var_11 = (signed char)-76;
int var_15 = -135472779;
int zero = 0;
signed char var_16 = (signed char)36;
unsigned char var_17 = (unsigned char)212;
int var_18 = -1990181375;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
