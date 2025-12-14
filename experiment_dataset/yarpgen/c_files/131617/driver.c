#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_8 = (unsigned short)18649;
short var_9 = (short)7373;
signed char var_14 = (signed char)-71;
int var_15 = 1366857319;
int zero = 0;
unsigned char var_18 = (unsigned char)24;
short var_19 = (short)30484;
void init() {
}

void checksum() {
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
