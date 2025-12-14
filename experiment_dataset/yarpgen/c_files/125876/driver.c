#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2451259396047488928LL;
unsigned short var_3 = (unsigned short)25095;
int var_5 = 603592292;
unsigned short var_7 = (unsigned short)26680;
long long int var_10 = -4040391650348539217LL;
signed char var_12 = (signed char)-78;
int zero = 0;
unsigned long long int var_13 = 13141650314141311106ULL;
unsigned short var_14 = (unsigned short)63122;
long long int var_15 = 1663248193091233515LL;
long long int var_16 = -9063030686445144715LL;
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
