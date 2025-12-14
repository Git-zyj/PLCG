#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-3317;
unsigned short var_3 = (unsigned short)52505;
signed char var_4 = (signed char)-74;
unsigned short var_6 = (unsigned short)53190;
unsigned int var_7 = 139076589U;
long long int var_8 = -1036510490743161301LL;
unsigned int var_9 = 2181668104U;
unsigned long long int var_11 = 8293352923710181314ULL;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)227;
long long int var_14 = -8390702680278153857LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
