#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_8 = (_Bool)0;
unsigned long long int var_9 = 1701661573019483188ULL;
unsigned int var_11 = 1672311457U;
unsigned long long int var_13 = 6718891237574117141ULL;
short var_14 = (short)-20332;
unsigned short var_15 = (unsigned short)38764;
int zero = 0;
long long int var_18 = 9178874305194977785LL;
unsigned char var_19 = (unsigned char)152;
unsigned long long int var_20 = 14212009091424580528ULL;
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
