#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)34698;
unsigned short var_1 = (unsigned short)32479;
_Bool var_2 = (_Bool)0;
int var_3 = -239255759;
long long int var_4 = 7712844409110446205LL;
signed char var_5 = (signed char)68;
int var_6 = 102523073;
unsigned int var_8 = 3386754986U;
unsigned short var_10 = (unsigned short)58815;
unsigned short var_13 = (unsigned short)55109;
int zero = 0;
_Bool var_15 = (_Bool)1;
long long int var_16 = 366992329963842843LL;
unsigned char var_17 = (unsigned char)156;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
