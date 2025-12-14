#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-18931;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)63037;
unsigned short var_12 = (unsigned short)55247;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)27845;
unsigned short var_15 = (unsigned short)42801;
long long int var_19 = -4490741687185820981LL;
int zero = 0;
unsigned char var_20 = (unsigned char)217;
signed char var_21 = (signed char)9;
int var_22 = 353083379;
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
