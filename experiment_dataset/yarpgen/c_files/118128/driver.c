#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)90;
unsigned int var_7 = 3924560025U;
int var_9 = 1002292982;
int var_12 = 1496033501;
int zero = 0;
signed char var_13 = (signed char)-114;
unsigned short var_14 = (unsigned short)2722;
unsigned int var_15 = 503051194U;
int var_16 = 112138417;
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
