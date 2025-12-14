#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)7702;
long long int var_5 = 1743931950872046501LL;
short var_8 = (short)-8226;
int var_9 = 1264325324;
unsigned int var_11 = 4028701299U;
short var_18 = (short)2127;
int zero = 0;
int var_19 = -135338946;
unsigned int var_20 = 3607159938U;
unsigned int var_21 = 55612279U;
unsigned int var_22 = 1648146091U;
short var_23 = (short)-19329;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
