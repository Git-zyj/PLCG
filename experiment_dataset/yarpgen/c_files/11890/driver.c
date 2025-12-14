#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11295226467096691066ULL;
short var_1 = (short)-7251;
signed char var_3 = (signed char)115;
_Bool var_4 = (_Bool)0;
unsigned long long int var_6 = 10194675746787720473ULL;
unsigned long long int var_7 = 5816223722329134229ULL;
unsigned char var_8 = (unsigned char)232;
signed char var_9 = (signed char)-40;
short var_10 = (short)23347;
long long int var_11 = 6749220561982150566LL;
int zero = 0;
signed char var_12 = (signed char)-24;
unsigned short var_13 = (unsigned short)44189;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
