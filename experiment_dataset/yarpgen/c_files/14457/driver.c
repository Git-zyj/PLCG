#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -415783163;
short var_3 = (short)-17293;
unsigned int var_9 = 269520578U;
_Bool var_10 = (_Bool)1;
unsigned long long int var_13 = 5643267245800641580ULL;
unsigned int var_14 = 3449184883U;
long long int var_15 = 7523399083494145248LL;
unsigned char var_16 = (unsigned char)18;
int zero = 0;
signed char var_20 = (signed char)67;
unsigned char var_21 = (unsigned char)42;
long long int var_22 = -2106144840921205909LL;
short var_23 = (short)1035;
int var_24 = -212593283;
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
