#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)24851;
unsigned char var_5 = (unsigned char)255;
int var_8 = -964633;
long long int var_9 = 6906191015764647805LL;
int zero = 0;
unsigned short var_15 = (unsigned short)29514;
signed char var_16 = (signed char)-85;
unsigned long long int var_17 = 8036401699237081578ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
