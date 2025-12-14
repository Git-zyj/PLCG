#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_13 = 13872803869316502617ULL;
unsigned char var_18 = (unsigned char)177;
int zero = 0;
unsigned long long int var_19 = 12828456631085608060ULL;
long long int var_20 = -6953249742728478220LL;
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
