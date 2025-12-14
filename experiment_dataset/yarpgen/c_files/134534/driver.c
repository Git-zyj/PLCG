#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3552074470229835550LL;
int var_1 = 1922513919;
short var_4 = (short)-17926;
_Bool var_5 = (_Bool)0;
_Bool var_9 = (_Bool)0;
unsigned char var_11 = (unsigned char)250;
int zero = 0;
unsigned int var_14 = 2927463597U;
unsigned short var_15 = (unsigned short)48258;
signed char var_16 = (signed char)-110;
unsigned long long int var_17 = 1145466047735197087ULL;
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
