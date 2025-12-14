#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)103;
unsigned long long int var_2 = 8445095987802840986ULL;
short var_7 = (short)25182;
unsigned long long int var_10 = 12370065193862295887ULL;
short var_12 = (short)-4437;
int zero = 0;
_Bool var_15 = (_Bool)0;
short var_16 = (short)-16020;
unsigned char var_17 = (unsigned char)153;
unsigned char var_18 = (unsigned char)119;
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
