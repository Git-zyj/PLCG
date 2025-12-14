#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)75;
unsigned int var_2 = 4049014874U;
int var_3 = 451409007;
unsigned short var_4 = (unsigned short)39121;
long long int var_5 = 8035987620473339739LL;
_Bool var_6 = (_Bool)1;
short var_7 = (short)-20854;
int var_8 = -1562217434;
int var_9 = -1522687091;
unsigned char var_10 = (unsigned char)19;
int var_12 = -2120904916;
long long int var_14 = 3612583820036785501LL;
int zero = 0;
signed char var_15 = (signed char)74;
unsigned short var_16 = (unsigned short)56108;
long long int var_17 = -6331391026663078835LL;
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
