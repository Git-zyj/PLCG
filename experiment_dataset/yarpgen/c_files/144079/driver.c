#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)59766;
unsigned int var_3 = 856126411U;
short var_7 = (short)18244;
signed char var_9 = (signed char)-71;
int zero = 0;
unsigned short var_10 = (unsigned short)1348;
signed char var_11 = (signed char)115;
signed char var_12 = (signed char)73;
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
