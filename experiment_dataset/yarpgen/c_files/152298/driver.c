#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12631192500597709468ULL;
int var_1 = 1483691713;
signed char var_3 = (signed char)3;
unsigned long long int var_6 = 13747084627885744395ULL;
signed char var_10 = (signed char)-92;
unsigned long long int var_15 = 15259476775494990344ULL;
unsigned long long int var_17 = 2418566539081678206ULL;
int zero = 0;
short var_20 = (short)31380;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)46736;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
