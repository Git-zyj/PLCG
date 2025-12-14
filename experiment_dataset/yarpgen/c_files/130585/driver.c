#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)67;
unsigned short var_5 = (unsigned short)17743;
unsigned char var_9 = (unsigned char)21;
int zero = 0;
int var_11 = -1685662295;
unsigned char var_12 = (unsigned char)209;
signed char var_13 = (signed char)-44;
signed char var_14 = (signed char)-79;
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
