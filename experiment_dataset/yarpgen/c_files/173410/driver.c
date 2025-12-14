#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)31423;
unsigned short var_4 = (unsigned short)58932;
signed char var_5 = (signed char)20;
unsigned int var_6 = 1718113701U;
unsigned int var_8 = 3959277326U;
int zero = 0;
int var_10 = 414125870;
signed char var_11 = (signed char)-74;
signed char var_12 = (signed char)125;
unsigned int var_13 = 908768019U;
unsigned short var_14 = (unsigned short)52841;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
