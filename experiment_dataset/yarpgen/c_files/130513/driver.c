#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)16227;
unsigned char var_1 = (unsigned char)82;
unsigned short var_11 = (unsigned short)2526;
int zero = 0;
short var_13 = (short)-2508;
unsigned long long int var_14 = 6000189678186161283ULL;
long long int var_15 = -601102207730060820LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
