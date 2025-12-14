#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 119935158U;
long long int var_6 = -5815260093228447825LL;
unsigned short var_8 = (unsigned short)23693;
unsigned char var_9 = (unsigned char)36;
int var_10 = -61729745;
_Bool var_12 = (_Bool)1;
signed char var_16 = (signed char)99;
int zero = 0;
unsigned short var_17 = (unsigned short)17590;
unsigned long long int var_18 = 10634820044465320288ULL;
unsigned long long int var_19 = 17809624809728916439ULL;
signed char var_20 = (signed char)-22;
unsigned char var_21 = (unsigned char)45;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
