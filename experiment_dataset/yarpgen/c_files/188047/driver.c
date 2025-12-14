#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-13176;
signed char var_8 = (signed char)-14;
long long int var_9 = 3891501330784938383LL;
int zero = 0;
unsigned char var_12 = (unsigned char)77;
unsigned char var_13 = (unsigned char)136;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
