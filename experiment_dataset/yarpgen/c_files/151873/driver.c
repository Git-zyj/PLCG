#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3785255071U;
unsigned char var_5 = (unsigned char)82;
short var_6 = (short)11218;
int var_7 = 760181153;
unsigned long long int var_9 = 12016053085047296493ULL;
int zero = 0;
unsigned long long int var_13 = 2793533203013347328ULL;
long long int var_14 = -8257004287712297942LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
