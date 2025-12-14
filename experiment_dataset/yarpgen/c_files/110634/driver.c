#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)58286;
signed char var_3 = (signed char)71;
long long int var_8 = 4996396249772203730LL;
int var_11 = -410981726;
unsigned char var_12 = (unsigned char)75;
int zero = 0;
long long int var_14 = -8146159737930906578LL;
int var_15 = -643405180;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
