#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2386776004U;
short var_3 = (short)-7217;
unsigned int var_5 = 2941961659U;
long long int var_7 = -5674440661980542048LL;
unsigned char var_10 = (unsigned char)162;
int zero = 0;
signed char var_12 = (signed char)-70;
unsigned char var_13 = (unsigned char)47;
void init() {
}

void checksum() {
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
