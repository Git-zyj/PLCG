#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2208374376132691090ULL;
short var_2 = (short)-23782;
unsigned short var_5 = (unsigned short)23177;
int var_7 = -452446982;
_Bool var_8 = (_Bool)0;
int zero = 0;
short var_10 = (short)-5279;
unsigned int var_11 = 3627623630U;
int var_12 = 2138916918;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
