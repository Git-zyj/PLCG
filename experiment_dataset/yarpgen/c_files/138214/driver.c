#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)23090;
unsigned int var_2 = 544668526U;
unsigned short var_5 = (unsigned short)32978;
unsigned short var_7 = (unsigned short)256;
int var_8 = 311049831;
unsigned long long int var_9 = 14169399009065326470ULL;
short var_10 = (short)9826;
signed char var_13 = (signed char)-93;
int zero = 0;
unsigned short var_14 = (unsigned short)39087;
long long int var_15 = 8028711903211627078LL;
unsigned short var_16 = (unsigned short)17517;
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
