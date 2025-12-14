#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)116;
signed char var_5 = (signed char)-70;
unsigned int var_6 = 1309126562U;
signed char var_7 = (signed char)-23;
long long int var_8 = 775898931835664696LL;
_Bool var_9 = (_Bool)0;
int zero = 0;
signed char var_11 = (signed char)9;
int var_12 = 1511121194;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
