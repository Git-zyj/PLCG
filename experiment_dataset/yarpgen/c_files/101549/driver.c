#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 7525790647532209767ULL;
int var_7 = -48906680;
int var_8 = -1645292278;
int var_11 = -1504879213;
unsigned int var_12 = 3874317268U;
int var_13 = -529365323;
int var_14 = -544041713;
int zero = 0;
unsigned int var_18 = 3039863442U;
int var_19 = -1125814439;
void init() {
}

void checksum() {
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
