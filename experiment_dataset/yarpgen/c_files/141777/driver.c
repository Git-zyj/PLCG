#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3877720442U;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)21208;
unsigned int var_6 = 4033397620U;
int var_7 = 1006809491;
unsigned int var_9 = 2031079313U;
int zero = 0;
unsigned char var_10 = (unsigned char)37;
long long int var_11 = -1162290198442680990LL;
unsigned int var_12 = 3594155942U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
