#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 73518292;
unsigned char var_5 = (unsigned char)108;
int var_6 = 1012240381;
long long int var_7 = 132743304543166335LL;
unsigned long long int var_8 = 9269273009239689976ULL;
unsigned short var_11 = (unsigned short)1970;
unsigned short var_12 = (unsigned short)29937;
signed char var_13 = (signed char)31;
unsigned short var_14 = (unsigned short)31566;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)1;
signed char var_18 = (signed char)-13;
int zero = 0;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)101;
void init() {
}

void checksum() {
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
