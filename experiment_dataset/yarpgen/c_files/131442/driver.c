#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
long long int var_4 = 2576172488285475292LL;
short var_6 = (short)-13917;
short var_7 = (short)17040;
_Bool var_10 = (_Bool)1;
unsigned char var_11 = (unsigned char)132;
signed char var_12 = (signed char)99;
unsigned short var_13 = (unsigned short)33871;
long long int var_16 = -1490601712526037380LL;
int zero = 0;
unsigned char var_17 = (unsigned char)67;
long long int var_18 = -7345072387375852467LL;
short var_19 = (short)-16195;
unsigned long long int var_20 = 14843520057401017851ULL;
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
