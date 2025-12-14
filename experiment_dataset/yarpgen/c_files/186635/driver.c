#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1779645518;
short var_5 = (short)-8567;
int var_8 = 88069483;
unsigned int var_9 = 3490834857U;
unsigned short var_13 = (unsigned short)37962;
int zero = 0;
int var_14 = -1985319198;
short var_15 = (short)10050;
void init() {
}

void checksum() {
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
