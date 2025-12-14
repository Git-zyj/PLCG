#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-10;
_Bool var_7 = (_Bool)1;
signed char var_8 = (signed char)123;
unsigned long long int var_9 = 16895904243531002721ULL;
short var_11 = (short)-15807;
unsigned short var_14 = (unsigned short)55900;
int zero = 0;
int var_18 = 703128824;
int var_19 = 1050959497;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
