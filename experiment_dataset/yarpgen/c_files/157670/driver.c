#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1310678101;
unsigned long long int var_1 = 14535308479431949677ULL;
signed char var_2 = (signed char)-105;
unsigned char var_3 = (unsigned char)89;
unsigned short var_6 = (unsigned short)35922;
short var_7 = (short)21831;
long long int var_10 = -8953000697325711379LL;
short var_12 = (short)14247;
int zero = 0;
short var_13 = (short)-5068;
_Bool var_14 = (_Bool)1;
int var_15 = 1472315704;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
