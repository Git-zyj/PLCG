#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 8143350542484421668LL;
unsigned short var_7 = (unsigned short)55058;
unsigned int var_8 = 1578140095U;
unsigned long long int var_11 = 2273966347743486567ULL;
unsigned long long int var_15 = 309590152966771794ULL;
unsigned long long int var_16 = 7217864863642725478ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)237;
unsigned short var_18 = (unsigned short)18602;
unsigned long long int var_19 = 15149546477513937882ULL;
unsigned char var_20 = (unsigned char)66;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
