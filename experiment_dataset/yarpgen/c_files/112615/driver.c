#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-10254;
short var_3 = (short)-25046;
int var_6 = -652117472;
signed char var_7 = (signed char)-20;
long long int var_8 = 877109175922463588LL;
unsigned char var_14 = (unsigned char)33;
unsigned short var_15 = (unsigned short)60299;
unsigned short var_16 = (unsigned short)42598;
int zero = 0;
signed char var_19 = (signed char)115;
short var_20 = (short)14494;
short var_21 = (short)22919;
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
