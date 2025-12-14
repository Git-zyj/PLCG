#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1190163550U;
short var_1 = (short)-10388;
unsigned int var_4 = 2526060345U;
unsigned short var_9 = (unsigned short)32246;
unsigned int var_10 = 934608003U;
_Bool var_11 = (_Bool)1;
int zero = 0;
int var_13 = -195702291;
short var_14 = (short)22930;
int var_15 = 147959336;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
