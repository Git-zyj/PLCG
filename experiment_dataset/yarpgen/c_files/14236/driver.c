#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)-89;
unsigned short var_10 = (unsigned short)3660;
int var_13 = -222502816;
short var_17 = (short)-22061;
int zero = 0;
int var_19 = -1545683986;
long long int var_20 = -6974610746804794999LL;
signed char var_21 = (signed char)-22;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
