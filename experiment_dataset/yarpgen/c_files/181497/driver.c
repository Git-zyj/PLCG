#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)5358;
short var_2 = (short)11686;
short var_3 = (short)17891;
unsigned char var_9 = (unsigned char)20;
int zero = 0;
signed char var_12 = (signed char)-3;
unsigned long long int var_13 = 18214731219668586466ULL;
signed char var_14 = (signed char)-86;
void init() {
}

void checksum() {
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
