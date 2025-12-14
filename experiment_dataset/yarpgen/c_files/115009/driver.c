#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15809290100672232980ULL;
long long int var_6 = -4947105833494656741LL;
unsigned long long int var_12 = 16416208130753242183ULL;
int zero = 0;
int var_15 = -777644187;
unsigned short var_16 = (unsigned short)63996;
int var_17 = -1171705059;
unsigned int var_18 = 2868062229U;
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
