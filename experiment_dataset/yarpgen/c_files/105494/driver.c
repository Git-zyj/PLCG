#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3876415269U;
long long int var_3 = 2387328661615292678LL;
unsigned char var_4 = (unsigned char)214;
unsigned int var_5 = 4041922610U;
unsigned char var_6 = (unsigned char)61;
int var_8 = 2133343627;
int zero = 0;
unsigned long long int var_10 = 2999900504211217124ULL;
int var_11 = -1604691420;
unsigned char var_12 = (unsigned char)23;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
