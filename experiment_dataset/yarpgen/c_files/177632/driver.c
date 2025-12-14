#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)8370;
int var_4 = 736296939;
unsigned short var_5 = (unsigned short)25979;
int var_9 = -1181087484;
unsigned short var_11 = (unsigned short)48389;
unsigned short var_12 = (unsigned short)14359;
int zero = 0;
unsigned short var_13 = (unsigned short)44361;
unsigned short var_14 = (unsigned short)63026;
unsigned long long int var_15 = 3090522210640276326ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
