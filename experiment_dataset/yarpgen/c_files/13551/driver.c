#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5358795592458996814ULL;
int var_4 = 1611591587;
long long int var_6 = 4843698059558762503LL;
long long int var_7 = 2801491447247288116LL;
short var_12 = (short)2845;
int zero = 0;
unsigned short var_15 = (unsigned short)1329;
unsigned char var_16 = (unsigned char)40;
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
