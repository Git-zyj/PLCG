#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 134516600195108038ULL;
unsigned int var_4 = 4237072791U;
unsigned int var_10 = 3532273842U;
int var_12 = 1752012465;
int zero = 0;
unsigned int var_19 = 1872475628U;
unsigned short var_20 = (unsigned short)7132;
int var_21 = 740616974;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
