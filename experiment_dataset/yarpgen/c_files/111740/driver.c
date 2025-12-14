#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-17166;
signed char var_7 = (signed char)98;
unsigned long long int var_8 = 15661096053267589680ULL;
short var_9 = (short)-14015;
unsigned int var_13 = 1931465726U;
int zero = 0;
unsigned short var_18 = (unsigned short)42477;
long long int var_19 = -568062695043396720LL;
void init() {
}

void checksum() {
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
