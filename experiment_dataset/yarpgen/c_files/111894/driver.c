#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned int var_4 = 3740961592U;
unsigned short var_5 = (unsigned short)37567;
unsigned char var_7 = (unsigned char)153;
unsigned long long int var_9 = 10434982401282259591ULL;
unsigned long long int var_10 = 2468691055431272114ULL;
long long int var_11 = 8939446456771757373LL;
long long int var_12 = 791314932998259371LL;
int zero = 0;
long long int var_18 = 5233093795679082855LL;
unsigned long long int var_19 = 12788127704716580461ULL;
unsigned long long int var_20 = 13634582193271797826ULL;
signed char var_21 = (signed char)80;
unsigned int var_22 = 3673335239U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
