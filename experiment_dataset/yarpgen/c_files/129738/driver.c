#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3925181021U;
signed char var_1 = (signed char)-38;
signed char var_5 = (signed char)-72;
int var_7 = 740004449;
short var_8 = (short)-9690;
signed char var_12 = (signed char)-99;
unsigned short var_14 = (unsigned short)13090;
int zero = 0;
unsigned int var_16 = 897943805U;
short var_17 = (short)-10169;
signed char var_18 = (signed char)-73;
short var_19 = (short)-1343;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
