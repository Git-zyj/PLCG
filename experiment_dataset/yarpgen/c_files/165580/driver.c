#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = 682873432;
short var_12 = (short)23007;
unsigned char var_13 = (unsigned char)32;
signed char var_19 = (signed char)17;
int zero = 0;
unsigned long long int var_20 = 12106994383349325633ULL;
long long int var_21 = 6858825237401127621LL;
unsigned int var_22 = 1928895011U;
int var_23 = 1242846871;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
