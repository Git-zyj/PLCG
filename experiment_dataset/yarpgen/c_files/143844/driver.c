#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
int var_3 = -698977671;
int var_4 = -1251556888;
int var_8 = -1932894182;
unsigned char var_9 = (unsigned char)239;
unsigned short var_12 = (unsigned short)37434;
unsigned short var_13 = (unsigned short)40357;
unsigned char var_14 = (unsigned char)82;
int zero = 0;
long long int var_17 = -3047572970474211671LL;
int var_18 = -487880734;
signed char var_19 = (signed char)21;
void init() {
}

void checksum() {
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
