#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-28702;
unsigned long long int var_7 = 836188352587678812ULL;
unsigned char var_8 = (unsigned char)230;
int zero = 0;
short var_20 = (short)23292;
signed char var_21 = (signed char)-65;
short var_22 = (short)18539;
long long int var_23 = 276696401578950691LL;
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
