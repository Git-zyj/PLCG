#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-17986;
unsigned char var_8 = (unsigned char)128;
int var_13 = 1381389204;
short var_15 = (short)-5780;
int zero = 0;
long long int var_19 = -3041337919236894785LL;
signed char var_20 = (signed char)99;
long long int var_21 = 4788692296714609157LL;
signed char var_22 = (signed char)-109;
int var_23 = -240571659;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
