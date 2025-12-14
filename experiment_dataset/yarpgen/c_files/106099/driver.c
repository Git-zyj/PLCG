#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)787;
unsigned short var_7 = (unsigned short)33727;
_Bool var_9 = (_Bool)0;
int zero = 0;
int var_15 = -906230933;
long long int var_16 = -3156808705628466379LL;
unsigned short var_17 = (unsigned short)7573;
signed char var_18 = (signed char)-106;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
