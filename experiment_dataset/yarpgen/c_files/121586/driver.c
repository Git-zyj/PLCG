#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-127;
unsigned char var_5 = (unsigned char)199;
int var_7 = -302582945;
unsigned char var_8 = (unsigned char)230;
unsigned long long int var_9 = 8033644100567449251ULL;
short var_10 = (short)8575;
unsigned char var_11 = (unsigned char)199;
_Bool var_13 = (_Bool)1;
int zero = 0;
int var_16 = 1362567083;
int var_17 = -321663519;
unsigned long long int var_18 = 2225232890724949908ULL;
short var_19 = (short)29351;
long long int var_20 = 2693186816790795824LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
