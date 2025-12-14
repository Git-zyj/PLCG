#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-9889;
long long int var_9 = -9139405709928451809LL;
signed char var_10 = (signed char)-48;
unsigned int var_13 = 3182455733U;
int zero = 0;
unsigned long long int var_17 = 825265689484616978ULL;
signed char var_18 = (signed char)-100;
short var_19 = (short)-9880;
signed char var_20 = (signed char)90;
unsigned int var_21 = 3219253942U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
