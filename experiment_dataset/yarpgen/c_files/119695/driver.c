#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)28859;
unsigned long long int var_3 = 18377792591850998452ULL;
int var_9 = 1471879983;
int zero = 0;
unsigned short var_13 = (unsigned short)27374;
unsigned char var_14 = (unsigned char)97;
short var_15 = (short)28970;
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
