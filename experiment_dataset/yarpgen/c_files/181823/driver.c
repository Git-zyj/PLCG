#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)25397;
unsigned char var_11 = (unsigned char)221;
short var_15 = (short)17801;
int zero = 0;
signed char var_20 = (signed char)-78;
unsigned int var_21 = 491951038U;
unsigned int var_22 = 3683374343U;
unsigned char var_23 = (unsigned char)57;
void init() {
}

void checksum() {
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
