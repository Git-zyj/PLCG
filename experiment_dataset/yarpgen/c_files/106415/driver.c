#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4174058485897187865LL;
int var_2 = -2123822504;
unsigned short var_7 = (unsigned short)47817;
unsigned long long int var_8 = 11993911717052190254ULL;
unsigned short var_11 = (unsigned short)32078;
long long int var_13 = -5326769029916866844LL;
int zero = 0;
short var_14 = (short)31406;
short var_15 = (short)-2231;
unsigned long long int var_16 = 1538774310824680507ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
