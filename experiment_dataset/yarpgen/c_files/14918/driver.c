#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-1566;
long long int var_3 = 7992845001858262225LL;
unsigned short var_4 = (unsigned short)1933;
short var_5 = (short)-22304;
unsigned short var_6 = (unsigned short)47261;
signed char var_8 = (signed char)-116;
signed char var_10 = (signed char)-112;
unsigned char var_11 = (unsigned char)40;
signed char var_13 = (signed char)100;
int zero = 0;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)188;
unsigned char var_18 = (unsigned char)177;
unsigned long long int var_19 = 6444854058539608022ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
