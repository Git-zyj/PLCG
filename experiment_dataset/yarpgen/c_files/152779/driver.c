#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_8 = (unsigned char)177;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned long long int var_16 = 5499000697575729600ULL;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 17364402794483569104ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
