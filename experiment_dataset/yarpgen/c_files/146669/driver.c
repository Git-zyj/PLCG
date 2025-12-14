#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -3763613471456890482LL;
signed char var_4 = (signed char)-86;
unsigned short var_5 = (unsigned short)30288;
unsigned int var_6 = 1113551016U;
short var_7 = (short)-1346;
unsigned int var_9 = 3329518466U;
int zero = 0;
unsigned int var_10 = 2598147476U;
unsigned char var_11 = (unsigned char)124;
short var_12 = (short)-1710;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
