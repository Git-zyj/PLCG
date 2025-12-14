#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)19514;
unsigned char var_2 = (unsigned char)215;
unsigned long long int var_3 = 7543268489601711068ULL;
long long int var_6 = 4507508027868259681LL;
unsigned int var_7 = 194793164U;
unsigned short var_9 = (unsigned short)4397;
signed char var_10 = (signed char)-85;
int var_11 = 586832253;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 14582140181480814425ULL;
unsigned int var_16 = 1975388854U;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 178773416U;
unsigned int var_19 = 302752418U;
int zero = 0;
long long int var_20 = 7239952913741214033LL;
int var_21 = -7331340;
unsigned short var_22 = (unsigned short)32374;
unsigned short var_23 = (unsigned short)54687;
unsigned char var_24 = (unsigned char)11;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
