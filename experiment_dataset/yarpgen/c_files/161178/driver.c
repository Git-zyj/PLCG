#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 17068561075731173027ULL;
int var_4 = 1561195466;
int var_7 = 1622200230;
unsigned long long int var_8 = 7076394445692504661ULL;
unsigned long long int var_13 = 17768945013080539362ULL;
short var_16 = (short)31043;
signed char var_17 = (signed char)-55;
int zero = 0;
int var_19 = 1796801558;
int var_20 = -1611822845;
int var_21 = -1806625209;
void init() {
}

void checksum() {
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
