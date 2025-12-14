#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-123;
signed char var_2 = (signed char)33;
signed char var_3 = (signed char)-15;
unsigned int var_7 = 1390392451U;
long long int var_10 = -1535169576940068187LL;
unsigned int var_12 = 3462293250U;
int zero = 0;
int var_13 = 650852729;
unsigned char var_14 = (unsigned char)4;
signed char var_15 = (signed char)-29;
unsigned int var_16 = 417009988U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
