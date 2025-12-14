#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1357594766;
unsigned long long int var_2 = 1537553340947216166ULL;
unsigned long long int var_5 = 2299073720996467462ULL;
unsigned long long int var_14 = 5996123941457893257ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)60996;
long long int var_21 = -4539499408149457505LL;
unsigned short var_22 = (unsigned short)9440;
short var_23 = (short)-32569;
int var_24 = 2090697723;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
