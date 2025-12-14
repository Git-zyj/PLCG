#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -2097462751;
unsigned int var_5 = 3960259880U;
signed char var_6 = (signed char)-79;
long long int var_10 = -4452400870629555279LL;
unsigned char var_12 = (unsigned char)243;
unsigned short var_13 = (unsigned short)11856;
int zero = 0;
unsigned long long int var_16 = 3305526724554738498ULL;
int var_17 = 998309452;
int var_18 = -259974617;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
