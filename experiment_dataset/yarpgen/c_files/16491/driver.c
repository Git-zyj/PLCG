#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 555925302U;
unsigned short var_16 = (unsigned short)13608;
unsigned int var_17 = 2349108301U;
int zero = 0;
signed char var_18 = (signed char)-47;
short var_19 = (short)-11840;
short var_20 = (short)-17551;
unsigned int var_21 = 3223441935U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
