#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)4526;
unsigned int var_5 = 4197257398U;
unsigned long long int var_8 = 17813686379309520464ULL;
int var_9 = -1440142283;
int zero = 0;
short var_10 = (short)-13877;
signed char var_11 = (signed char)-79;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
