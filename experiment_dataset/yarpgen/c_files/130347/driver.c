#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8456771821718807991ULL;
short var_5 = (short)12550;
unsigned int var_9 = 4206830425U;
signed char var_12 = (signed char)-56;
long long int var_13 = -8188725024717535066LL;
int zero = 0;
int var_15 = 346706304;
short var_16 = (short)25871;
unsigned short var_17 = (unsigned short)380;
void init() {
}

void checksum() {
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
