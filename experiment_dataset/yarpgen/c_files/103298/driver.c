#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)93;
unsigned short var_1 = (unsigned short)43208;
unsigned short var_2 = (unsigned short)20490;
_Bool var_6 = (_Bool)1;
int var_10 = -1089751942;
int var_14 = 1201929615;
int zero = 0;
unsigned char var_15 = (unsigned char)51;
unsigned long long int var_16 = 14365670495879213056ULL;
unsigned short var_17 = (unsigned short)47873;
void init() {
}

void checksum() {
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
