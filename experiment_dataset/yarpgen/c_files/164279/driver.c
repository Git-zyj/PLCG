#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -6063658088537030071LL;
unsigned int var_3 = 4223936968U;
long long int var_4 = 7755284508523334321LL;
_Bool var_5 = (_Bool)1;
unsigned short var_6 = (unsigned short)2418;
unsigned char var_7 = (unsigned char)6;
int var_8 = 1820893518;
int var_11 = 733717218;
int var_13 = -1114679548;
int zero = 0;
unsigned short var_14 = (unsigned short)31595;
int var_15 = 1489383978;
int var_16 = 1037048553;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
