#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)117;
signed char var_6 = (signed char)-62;
unsigned char var_10 = (unsigned char)157;
unsigned long long int var_15 = 2768326755548989383ULL;
unsigned short var_16 = (unsigned short)24644;
int zero = 0;
unsigned long long int var_17 = 5095000312628437650ULL;
unsigned char var_18 = (unsigned char)150;
void init() {
}

void checksum() {
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
