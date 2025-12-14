#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2947181759U;
short var_2 = (short)3755;
short var_3 = (short)17909;
signed char var_4 = (signed char)16;
unsigned int var_7 = 590395884U;
long long int var_9 = -8396438738722869852LL;
int zero = 0;
short var_10 = (short)26861;
unsigned char var_11 = (unsigned char)18;
short var_12 = (short)-7488;
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
