#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2647695670U;
unsigned int var_4 = 1047261035U;
short var_9 = (short)14615;
unsigned int var_11 = 2719331433U;
int zero = 0;
signed char var_17 = (signed char)79;
unsigned short var_18 = (unsigned short)34218;
int var_19 = 862945129;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
