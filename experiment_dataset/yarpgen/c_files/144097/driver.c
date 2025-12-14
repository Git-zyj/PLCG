#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_2 = 1906156863U;
int var_3 = 965021453;
unsigned int var_6 = 1405233704U;
int var_7 = 690591058;
unsigned short var_9 = (unsigned short)26381;
int zero = 0;
unsigned char var_10 = (unsigned char)197;
unsigned short var_11 = (unsigned short)43585;
unsigned char var_12 = (unsigned char)25;
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
