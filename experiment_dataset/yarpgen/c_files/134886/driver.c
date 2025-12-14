#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1881946139;
int var_3 = 1471408394;
unsigned short var_4 = (unsigned short)11873;
short var_6 = (short)26748;
long long int var_8 = -4709092036555554464LL;
short var_9 = (short)-13965;
signed char var_11 = (signed char)-108;
int zero = 0;
signed char var_16 = (signed char)-99;
short var_17 = (short)-174;
signed char var_18 = (signed char)-59;
unsigned char var_19 = (unsigned char)253;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
