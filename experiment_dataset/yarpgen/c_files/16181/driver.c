#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2334394376U;
signed char var_5 = (signed char)-82;
unsigned char var_6 = (unsigned char)231;
unsigned int var_12 = 2682155553U;
unsigned int var_14 = 2596777580U;
short var_15 = (short)9311;
long long int var_16 = 8476356755478956895LL;
int zero = 0;
_Bool var_18 = (_Bool)0;
int var_19 = -287837438;
unsigned short var_20 = (unsigned short)5465;
signed char var_21 = (signed char)97;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
