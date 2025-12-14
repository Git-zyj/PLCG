#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 4827188789715612621ULL;
long long int var_3 = -6574305729177611833LL;
unsigned short var_4 = (unsigned short)28025;
unsigned short var_6 = (unsigned short)40948;
long long int var_7 = -464897777792307691LL;
unsigned short var_8 = (unsigned short)57293;
long long int var_10 = 4566448113529984323LL;
long long int var_12 = -7381511579734746412LL;
int zero = 0;
long long int var_13 = 5532910084263624546LL;
long long int var_14 = -295754189596500302LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
