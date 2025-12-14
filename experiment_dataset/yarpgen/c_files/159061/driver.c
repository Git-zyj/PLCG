#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 4055236;
long long int var_2 = -2299263616620670557LL;
int var_5 = 1216293327;
int var_7 = -1560313786;
short var_8 = (short)20464;
int var_9 = -1812569095;
unsigned long long int var_10 = 10341717817487750753ULL;
unsigned char var_11 = (unsigned char)138;
signed char var_12 = (signed char)57;
int var_13 = -1885985095;
int zero = 0;
unsigned int var_17 = 3147735696U;
int var_18 = 203230233;
long long int var_19 = -609947035384658579LL;
short var_20 = (short)6256;
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
