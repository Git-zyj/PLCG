#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)65280;
unsigned char var_5 = (unsigned char)248;
unsigned long long int var_7 = 8236399971103551467ULL;
signed char var_8 = (signed char)-36;
unsigned char var_16 = (unsigned char)232;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 4248442127U;
long long int var_19 = 8372389812188826486LL;
unsigned short var_20 = (unsigned short)28021;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
