#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_9 = (unsigned char)48;
long long int var_10 = 6472675514601311913LL;
int var_18 = -1712985265;
int zero = 0;
unsigned short var_20 = (unsigned short)55637;
signed char var_21 = (signed char)-36;
long long int var_22 = 119722274756264266LL;
long long int var_23 = 4799310202128014654LL;
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
