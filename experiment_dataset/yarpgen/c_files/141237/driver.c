#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 781204505207788792LL;
long long int var_11 = 4062792703524836147LL;
unsigned short var_18 = (unsigned short)47195;
int zero = 0;
unsigned char var_20 = (unsigned char)119;
unsigned char var_21 = (unsigned char)125;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
