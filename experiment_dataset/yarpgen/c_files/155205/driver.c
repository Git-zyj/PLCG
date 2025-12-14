#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -6860377975048951103LL;
signed char var_6 = (signed char)37;
signed char var_7 = (signed char)-80;
short var_10 = (short)-20481;
int zero = 0;
unsigned short var_13 = (unsigned short)41543;
unsigned char var_14 = (unsigned char)84;
void init() {
}

void checksum() {
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
