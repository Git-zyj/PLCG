#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)20303;
short var_3 = (short)-2564;
int var_5 = -1061291162;
unsigned char var_14 = (unsigned char)137;
int zero = 0;
unsigned int var_18 = 3079522974U;
signed char var_19 = (signed char)-46;
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
