#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -204519735188148339LL;
unsigned short var_6 = (unsigned short)62957;
unsigned long long int var_11 = 6114186846835262149ULL;
unsigned short var_16 = (unsigned short)36316;
int zero = 0;
unsigned long long int var_20 = 13460757822910670975ULL;
unsigned short var_21 = (unsigned short)50066;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
