#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)69;
_Bool var_2 = (_Bool)0;
unsigned short var_5 = (unsigned short)39847;
signed char var_6 = (signed char)73;
long long int var_7 = 4236489885556847355LL;
unsigned short var_10 = (unsigned short)44600;
signed char var_16 = (signed char)-38;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned short var_19 = (unsigned short)9214;
long long int var_20 = -3819153760706653734LL;
long long int var_21 = -1395634467885143939LL;
void init() {
}

void checksum() {
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
