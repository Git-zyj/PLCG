#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6397467312611181582LL;
unsigned short var_3 = (unsigned short)61692;
unsigned long long int var_5 = 3973405946634549250ULL;
short var_10 = (short)-23822;
_Bool var_13 = (_Bool)1;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned char var_17 = (unsigned char)115;
unsigned long long int var_18 = 17563912544773902901ULL;
long long int var_19 = 4959935320159393768LL;
unsigned char var_20 = (unsigned char)223;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
