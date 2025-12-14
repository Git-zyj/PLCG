#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)92;
unsigned int var_5 = 374400618U;
unsigned long long int var_6 = 4028676788093243917ULL;
unsigned short var_11 = (unsigned short)50951;
int zero = 0;
long long int var_14 = -5423088667802410655LL;
short var_15 = (short)-964;
unsigned char var_16 = (unsigned char)117;
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
