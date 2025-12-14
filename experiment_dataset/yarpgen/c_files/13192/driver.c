#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3443914390816376594ULL;
unsigned long long int var_8 = 16737222504666404716ULL;
unsigned short var_10 = (unsigned short)56153;
unsigned short var_12 = (unsigned short)16917;
unsigned char var_13 = (unsigned char)86;
unsigned char var_15 = (unsigned char)40;
int zero = 0;
unsigned short var_16 = (unsigned short)23514;
long long int var_17 = 331312845735568938LL;
unsigned char var_18 = (unsigned char)24;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
