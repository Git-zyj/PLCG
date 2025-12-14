#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)29733;
long long int var_8 = 2442557282544929900LL;
unsigned char var_10 = (unsigned char)105;
unsigned int var_16 = 1700896387U;
int zero = 0;
long long int var_19 = 6119047852070635855LL;
unsigned long long int var_20 = 2253008197171660038ULL;
void init() {
}

void checksum() {
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
