#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 6436460628327109775ULL;
signed char var_6 = (signed char)-57;
int var_10 = -629575871;
int zero = 0;
short var_16 = (short)18852;
int var_17 = 1390663953;
unsigned short var_18 = (unsigned short)16530;
void init() {
}

void checksum() {
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
