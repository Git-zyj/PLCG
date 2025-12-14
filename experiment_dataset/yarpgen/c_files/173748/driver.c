#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1238981667;
unsigned long long int var_7 = 12915635841914701102ULL;
signed char var_8 = (signed char)0;
unsigned char var_9 = (unsigned char)104;
unsigned long long int var_12 = 17662270075188853474ULL;
int zero = 0;
unsigned long long int var_15 = 13746454974072736285ULL;
int var_16 = 1046852447;
void init() {
}

void checksum() {
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
