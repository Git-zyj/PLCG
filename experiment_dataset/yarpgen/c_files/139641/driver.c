#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)204;
unsigned char var_1 = (unsigned char)63;
unsigned int var_9 = 3115172792U;
short var_11 = (short)23526;
long long int var_12 = 5412878156095302759LL;
int zero = 0;
long long int var_16 = 7414773577079539287LL;
unsigned int var_17 = 543634459U;
unsigned char var_18 = (unsigned char)68;
int var_19 = -1217965641;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
