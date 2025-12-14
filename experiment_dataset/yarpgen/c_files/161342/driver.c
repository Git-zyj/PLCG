#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)156;
unsigned char var_4 = (unsigned char)153;
short var_7 = (short)19176;
unsigned char var_9 = (unsigned char)167;
unsigned int var_10 = 1600074068U;
int zero = 0;
long long int var_11 = 6213980711573842327LL;
long long int var_12 = 7355298202014867655LL;
signed char var_13 = (signed char)-28;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
