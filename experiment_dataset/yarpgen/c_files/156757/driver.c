#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)34147;
unsigned char var_4 = (unsigned char)74;
_Bool var_10 = (_Bool)0;
unsigned char var_13 = (unsigned char)57;
unsigned short var_14 = (unsigned short)22238;
int zero = 0;
unsigned short var_19 = (unsigned short)36672;
signed char var_20 = (signed char)(-127 - 1);
unsigned long long int var_21 = 9567938253349962345ULL;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
