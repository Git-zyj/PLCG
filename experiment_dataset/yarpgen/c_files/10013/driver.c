#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_5 = 395169555;
int var_7 = 1328785287;
_Bool var_8 = (_Bool)0;
unsigned char var_9 = (unsigned char)151;
unsigned long long int var_10 = 7327160371517096908ULL;
unsigned char var_12 = (unsigned char)36;
unsigned char var_13 = (unsigned char)178;
unsigned long long int var_15 = 8203773504168723865ULL;
unsigned long long int var_16 = 14900594614149086377ULL;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 2046175533595389839ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
