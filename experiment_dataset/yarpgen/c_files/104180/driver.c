#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2617696533U;
int var_3 = 376609758;
signed char var_6 = (signed char)-95;
short var_11 = (short)-11939;
int zero = 0;
unsigned short var_19 = (unsigned short)60929;
unsigned short var_20 = (unsigned short)9652;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
