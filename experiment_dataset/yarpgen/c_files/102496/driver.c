#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3839422213U;
short var_4 = (short)16412;
unsigned int var_6 = 1275452245U;
long long int var_7 = 871523135684101667LL;
_Bool var_8 = (_Bool)0;
int zero = 0;
_Bool var_11 = (_Bool)0;
int var_12 = 325053002;
short var_13 = (short)-12706;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
