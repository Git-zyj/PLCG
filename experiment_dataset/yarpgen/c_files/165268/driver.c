#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2147972475U;
unsigned char var_3 = (unsigned char)25;
_Bool var_4 = (_Bool)1;
unsigned char var_6 = (unsigned char)194;
_Bool var_10 = (_Bool)0;
unsigned short var_13 = (unsigned short)651;
int var_18 = -1179353348;
int zero = 0;
long long int var_20 = -8667741616520006938LL;
_Bool var_21 = (_Bool)1;
signed char var_22 = (signed char)-121;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
