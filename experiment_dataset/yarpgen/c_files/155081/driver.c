#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17076883164784831451ULL;
unsigned long long int var_4 = 17369016706745410693ULL;
short var_6 = (short)-9802;
signed char var_8 = (signed char)-116;
int zero = 0;
unsigned long long int var_14 = 1114841165749923864ULL;
unsigned char var_15 = (unsigned char)246;
_Bool var_16 = (_Bool)0;
short var_17 = (short)-2826;
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
