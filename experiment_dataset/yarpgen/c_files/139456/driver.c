#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)248;
unsigned char var_9 = (unsigned char)134;
unsigned int var_11 = 3188524811U;
long long int var_14 = 8312273390814567577LL;
signed char var_16 = (signed char)-51;
int zero = 0;
unsigned int var_18 = 520017537U;
short var_19 = (short)-19041;
signed char var_20 = (signed char)25;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
