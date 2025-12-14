#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2799685141536920977LL;
unsigned short var_1 = (unsigned short)17822;
unsigned char var_5 = (unsigned char)98;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)19870;
int zero = 0;
long long int var_12 = -7415519897941439823LL;
unsigned int var_13 = 949315420U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
