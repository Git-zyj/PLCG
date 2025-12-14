#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 4960458444611438993LL;
short var_6 = (short)-13115;
short var_8 = (short)-26272;
long long int var_13 = -8725309251721194130LL;
unsigned long long int var_15 = 3697592613819623947ULL;
int zero = 0;
unsigned int var_16 = 3842617418U;
short var_17 = (short)-15432;
int var_18 = 788687208;
unsigned int var_19 = 245130918U;
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
