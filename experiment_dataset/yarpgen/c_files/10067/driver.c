#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-11932;
unsigned int var_2 = 1860228911U;
int var_3 = -107078323;
unsigned short var_5 = (unsigned short)31428;
unsigned long long int var_6 = 10090766480197901114ULL;
unsigned int var_9 = 926219176U;
int var_10 = 970011891;
int zero = 0;
unsigned int var_13 = 2433698923U;
short var_14 = (short)-5942;
int var_15 = 1185647730;
int var_16 = -798746309;
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
