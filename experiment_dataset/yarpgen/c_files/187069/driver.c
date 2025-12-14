#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4070738613U;
signed char var_3 = (signed char)-80;
unsigned long long int var_4 = 2735759107488738637ULL;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)234;
unsigned char var_8 = (unsigned char)138;
signed char var_9 = (signed char)9;
int zero = 0;
long long int var_10 = -3741923302248369749LL;
_Bool var_11 = (_Bool)1;
unsigned char var_12 = (unsigned char)42;
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
