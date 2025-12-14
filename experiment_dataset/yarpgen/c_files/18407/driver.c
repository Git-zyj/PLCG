#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)3963;
int var_10 = 36003228;
unsigned int var_13 = 1140503526U;
unsigned char var_14 = (unsigned char)105;
int zero = 0;
int var_19 = -1746900257;
unsigned long long int var_20 = 13975167776457005675ULL;
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
