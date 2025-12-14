#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-10842;
unsigned char var_1 = (unsigned char)66;
long long int var_6 = 1845568708253700929LL;
_Bool var_7 = (_Bool)0;
unsigned int var_11 = 663737123U;
unsigned short var_16 = (unsigned short)34764;
int zero = 0;
unsigned long long int var_18 = 4169551278609957091ULL;
_Bool var_19 = (_Bool)0;
long long int var_20 = 9042546651075392308LL;
long long int var_21 = 2662721334155325582LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
