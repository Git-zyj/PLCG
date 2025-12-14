#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)16002;
unsigned char var_3 = (unsigned char)68;
long long int var_7 = -454767970927384475LL;
short var_8 = (short)653;
unsigned char var_9 = (unsigned char)185;
int zero = 0;
unsigned char var_11 = (unsigned char)124;
unsigned long long int var_12 = 8882456002801329648ULL;
int var_13 = 1302580568;
signed char var_14 = (signed char)6;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
