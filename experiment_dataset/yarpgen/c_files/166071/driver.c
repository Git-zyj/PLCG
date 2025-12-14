#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 18295560215150103108ULL;
unsigned long long int var_10 = 1975755008127088911ULL;
_Bool var_13 = (_Bool)0;
unsigned char var_17 = (unsigned char)107;
int zero = 0;
unsigned short var_19 = (unsigned short)53190;
int var_20 = -2064330533;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
