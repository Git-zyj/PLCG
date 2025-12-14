#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -2176822076019326200LL;
short var_8 = (short)-21307;
unsigned short var_11 = (unsigned short)26958;
unsigned short var_14 = (unsigned short)57518;
unsigned long long int var_15 = 14969938645354927862ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)16987;
unsigned short var_19 = (unsigned short)26096;
unsigned long long int var_20 = 12873407175018376329ULL;
unsigned long long int var_21 = 11683350933140148695ULL;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
