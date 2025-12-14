#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)35226;
unsigned short var_3 = (unsigned short)64883;
short var_5 = (short)6723;
int var_6 = 1487959822;
unsigned int var_10 = 3900801430U;
short var_14 = (short)28997;
int zero = 0;
unsigned short var_15 = (unsigned short)11260;
unsigned short var_16 = (unsigned short)49823;
int var_17 = 1725392106;
int var_18 = -539319892;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
