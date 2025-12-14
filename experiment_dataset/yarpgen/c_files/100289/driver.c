#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7974448048950613232ULL;
unsigned short var_3 = (unsigned short)6725;
signed char var_4 = (signed char)-11;
short var_6 = (short)30300;
int zero = 0;
short var_15 = (short)2525;
unsigned short var_16 = (unsigned short)57416;
void init() {
}

void checksum() {
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
