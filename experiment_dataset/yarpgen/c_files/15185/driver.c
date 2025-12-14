#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_16 = (signed char)110;
int var_18 = 357448078;
int zero = 0;
unsigned short var_19 = (unsigned short)2266;
unsigned char var_20 = (unsigned char)102;
long long int var_21 = 4919672053167231292LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
