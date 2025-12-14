#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 11233328385668982370ULL;
signed char var_4 = (signed char)92;
signed char var_6 = (signed char)40;
unsigned short var_7 = (unsigned short)56169;
unsigned int var_10 = 637616814U;
int zero = 0;
short var_11 = (short)19763;
signed char var_12 = (signed char)-25;
void init() {
}

void checksum() {
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
