#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 624227189U;
_Bool var_5 = (_Bool)1;
long long int var_7 = 1552259120579098701LL;
unsigned char var_9 = (unsigned char)99;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned char var_12 = (unsigned char)133;
unsigned short var_13 = (unsigned short)50815;
unsigned char var_14 = (unsigned char)65;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
