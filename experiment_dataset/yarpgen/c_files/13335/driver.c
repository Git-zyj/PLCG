#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)8288;
unsigned short var_5 = (unsigned short)43914;
unsigned int var_6 = 1690626026U;
long long int var_7 = 1718017149950288685LL;
long long int var_8 = -292361417732775733LL;
int zero = 0;
unsigned char var_10 = (unsigned char)183;
unsigned char var_11 = (unsigned char)195;
long long int var_12 = 3131649490558775201LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
