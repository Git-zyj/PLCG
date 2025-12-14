#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 9059540723539957934LL;
long long int var_3 = 6015760290025871759LL;
int var_4 = -1970465213;
unsigned long long int var_6 = 855680383770414457ULL;
long long int var_7 = 5512353390931823652LL;
unsigned int var_10 = 535576579U;
_Bool var_13 = (_Bool)0;
int zero = 0;
int var_14 = 1948212465;
int var_15 = -482067826;
long long int var_16 = 799861192676665662LL;
signed char var_17 = (signed char)-48;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
