#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)7;
long long int var_5 = 7201053314367411047LL;
unsigned char var_8 = (unsigned char)95;
unsigned long long int var_14 = 819282535184964407ULL;
unsigned short var_16 = (unsigned short)10472;
int zero = 0;
long long int var_17 = 3437112004246699415LL;
short var_18 = (short)23676;
void init() {
}

void checksum() {
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
