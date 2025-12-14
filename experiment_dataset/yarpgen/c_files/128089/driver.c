#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)0;
int var_5 = 1313080737;
_Bool var_6 = (_Bool)0;
unsigned char var_12 = (unsigned char)186;
unsigned int var_15 = 127731032U;
unsigned char var_17 = (unsigned char)3;
int zero = 0;
unsigned char var_18 = (unsigned char)194;
long long int var_19 = 5208967783127990753LL;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 2952450109U;
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
