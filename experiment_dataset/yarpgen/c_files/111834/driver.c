#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8423323554668021706LL;
short var_1 = (short)20298;
int var_4 = 1034777771;
short var_6 = (short)5113;
int zero = 0;
signed char var_20 = (signed char)-15;
signed char var_21 = (signed char)14;
signed char var_22 = (signed char)-23;
unsigned short var_23 = (unsigned short)50741;
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
