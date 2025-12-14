#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2632562312145968147LL;
unsigned int var_1 = 1564106597U;
signed char var_2 = (signed char)-62;
signed char var_4 = (signed char)-14;
unsigned short var_5 = (unsigned short)51232;
unsigned char var_7 = (unsigned char)30;
unsigned char var_10 = (unsigned char)174;
int zero = 0;
int var_12 = 662409343;
_Bool var_13 = (_Bool)0;
long long int var_14 = -8764313733389829291LL;
unsigned char var_15 = (unsigned char)156;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
