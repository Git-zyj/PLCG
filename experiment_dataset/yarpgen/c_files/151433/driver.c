#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)39008;
unsigned char var_2 = (unsigned char)244;
unsigned short var_11 = (unsigned short)39385;
int zero = 0;
unsigned long long int var_13 = 15272375509647777660ULL;
int var_14 = 683655885;
unsigned long long int var_15 = 5317329318313757195ULL;
long long int var_16 = 2148844831938589705LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
