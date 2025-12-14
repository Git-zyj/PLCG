#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)121;
signed char var_2 = (signed char)-64;
signed char var_4 = (signed char)109;
unsigned char var_5 = (unsigned char)200;
unsigned short var_7 = (unsigned short)43812;
int zero = 0;
long long int var_10 = -5017440455440298181LL;
long long int var_11 = 4492274719498720855LL;
long long int var_12 = 3239826910880699010LL;
unsigned int var_13 = 3808624341U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
