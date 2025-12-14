#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1889997001561682478ULL;
signed char var_1 = (signed char)78;
unsigned char var_2 = (unsigned char)14;
signed char var_5 = (signed char)-22;
unsigned int var_6 = 4054872553U;
unsigned char var_8 = (unsigned char)138;
unsigned long long int var_9 = 17261096806449453923ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)156;
unsigned char var_11 = (unsigned char)53;
short var_12 = (short)19484;
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
