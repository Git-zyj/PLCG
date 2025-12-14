#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -801837918325156896LL;
unsigned short var_4 = (unsigned short)530;
unsigned int var_8 = 1618035983U;
unsigned long long int var_9 = 14675575021664181971ULL;
unsigned int var_10 = 401801261U;
int var_12 = -534420042;
unsigned char var_13 = (unsigned char)51;
long long int var_18 = 8138017529929396631LL;
int zero = 0;
unsigned long long int var_20 = 14732826591308696490ULL;
signed char var_21 = (signed char)104;
unsigned long long int var_22 = 2382247996684795946ULL;
short var_23 = (short)8250;
unsigned int var_24 = 49838506U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
