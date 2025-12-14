#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)14476;
signed char var_3 = (signed char)127;
long long int var_4 = -1287587611249529141LL;
short var_6 = (short)18181;
long long int var_7 = 2096516811715294500LL;
signed char var_9 = (signed char)2;
unsigned int var_13 = 149424983U;
long long int var_15 = -5722884501691665283LL;
short var_16 = (short)-5535;
_Bool var_17 = (_Bool)1;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned char var_19 = (unsigned char)50;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
