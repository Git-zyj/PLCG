#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)3;
signed char var_7 = (signed char)18;
signed char var_8 = (signed char)-101;
unsigned char var_9 = (unsigned char)97;
int var_10 = 388596015;
int zero = 0;
int var_11 = -854981612;
signed char var_12 = (signed char)32;
unsigned short var_13 = (unsigned short)26021;
short var_14 = (short)14070;
void init() {
}

void checksum() {
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
