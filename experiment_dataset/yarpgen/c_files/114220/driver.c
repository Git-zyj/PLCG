#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10663007829366843082ULL;
signed char var_6 = (signed char)-2;
unsigned char var_7 = (unsigned char)30;
unsigned char var_8 = (unsigned char)234;
unsigned char var_11 = (unsigned char)156;
long long int var_12 = -2083400950359054990LL;
signed char var_14 = (signed char)25;
unsigned char var_16 = (unsigned char)10;
unsigned char var_18 = (unsigned char)46;
int zero = 0;
unsigned char var_20 = (unsigned char)199;
unsigned long long int var_21 = 5247215314671382730ULL;
long long int var_22 = 6416038891405760452LL;
long long int var_23 = -5809342718098882487LL;
unsigned long long int var_24 = 15710783994031243599ULL;
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
