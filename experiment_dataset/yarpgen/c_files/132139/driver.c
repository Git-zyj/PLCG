#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11504210485083794096ULL;
unsigned long long int var_1 = 6849571237105381739ULL;
unsigned short var_2 = (unsigned short)41461;
int var_4 = -303731080;
unsigned long long int var_5 = 5574135033845214056ULL;
unsigned short var_6 = (unsigned short)27314;
int var_11 = -2143005855;
int zero = 0;
unsigned long long int var_12 = 15754083474834242571ULL;
unsigned short var_13 = (unsigned short)48984;
signed char var_14 = (signed char)114;
unsigned int var_15 = 914294003U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
