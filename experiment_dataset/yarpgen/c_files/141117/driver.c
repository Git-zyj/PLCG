#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
signed char var_4 = (signed char)115;
unsigned char var_5 = (unsigned char)157;
unsigned char var_9 = (unsigned char)53;
unsigned char var_17 = (unsigned char)200;
int zero = 0;
int var_20 = 568175526;
unsigned short var_21 = (unsigned short)3115;
unsigned char var_22 = (unsigned char)150;
long long int var_23 = 2566843190529336018LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
