#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 226899995;
short var_2 = (short)-20884;
unsigned int var_5 = 2489776421U;
int var_9 = -1229398493;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 289131253U;
int zero = 0;
int var_17 = 2103550259;
unsigned short var_18 = (unsigned short)4646;
_Bool var_19 = (_Bool)1;
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
