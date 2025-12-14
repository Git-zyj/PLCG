#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5102107701161539659ULL;
long long int var_2 = -1875627075861080850LL;
unsigned char var_3 = (unsigned char)42;
unsigned long long int var_4 = 5991866515712041900ULL;
unsigned int var_6 = 3929910663U;
signed char var_8 = (signed char)121;
unsigned long long int var_10 = 7643470887850377951ULL;
short var_12 = (short)-10485;
unsigned short var_13 = (unsigned short)38319;
int zero = 0;
long long int var_15 = 3448609342091755704LL;
int var_16 = 1226561532;
unsigned short var_17 = (unsigned short)61574;
unsigned int var_18 = 101230288U;
unsigned char var_19 = (unsigned char)218;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
