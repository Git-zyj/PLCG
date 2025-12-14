#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)26508;
unsigned short var_4 = (unsigned short)40686;
unsigned short var_12 = (unsigned short)59633;
int zero = 0;
unsigned short var_15 = (unsigned short)11240;
unsigned short var_16 = (unsigned short)54146;
void init() {
}

void checksum() {
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
