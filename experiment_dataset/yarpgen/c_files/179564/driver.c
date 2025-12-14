#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)91;
signed char var_5 = (signed char)-97;
unsigned short var_11 = (unsigned short)17031;
signed char var_12 = (signed char)-56;
int zero = 0;
signed char var_20 = (signed char)103;
unsigned int var_21 = 2055283846U;
void init() {
}

void checksum() {
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
