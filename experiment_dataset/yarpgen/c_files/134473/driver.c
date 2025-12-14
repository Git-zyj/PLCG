#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1442155538;
unsigned char var_5 = (unsigned char)247;
unsigned char var_7 = (unsigned char)219;
_Bool var_8 = (_Bool)1;
int var_10 = -428126361;
unsigned long long int var_11 = 16255270020336901558ULL;
signed char var_12 = (signed char)-12;
int zero = 0;
long long int var_13 = -1138633006264557962LL;
int var_14 = 200744996;
unsigned long long int var_15 = 18146600689447060585ULL;
void init() {
}

void checksum() {
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
