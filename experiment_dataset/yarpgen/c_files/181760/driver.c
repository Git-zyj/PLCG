#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)22364;
int var_7 = 1519808793;
int var_9 = -218992786;
unsigned long long int var_12 = 6140162082449921161ULL;
short var_13 = (short)17305;
unsigned long long int var_15 = 3679523927880793018ULL;
int zero = 0;
unsigned long long int var_16 = 15731133166413702992ULL;
int var_17 = 2078069887;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
