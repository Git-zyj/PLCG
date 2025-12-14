#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1780725790;
unsigned short var_9 = (unsigned short)10086;
long long int var_12 = 8462376739374619916LL;
long long int var_13 = 2243155411736821825LL;
unsigned int var_15 = 2220709195U;
signed char var_18 = (signed char)-90;
int zero = 0;
short var_20 = (short)-16461;
short var_21 = (short)-25556;
long long int var_22 = -2387272978756032927LL;
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
