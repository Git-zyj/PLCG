#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1176181834;
short var_3 = (short)-26480;
unsigned short var_7 = (unsigned short)30596;
unsigned short var_8 = (unsigned short)50435;
short var_9 = (short)-12126;
int var_11 = -2061575833;
unsigned char var_12 = (unsigned char)39;
int var_16 = -2126004215;
int zero = 0;
short var_19 = (short)-16251;
int var_20 = -1009025463;
_Bool var_21 = (_Bool)1;
signed char var_22 = (signed char)53;
unsigned long long int var_23 = 4128705461022130803ULL;
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
