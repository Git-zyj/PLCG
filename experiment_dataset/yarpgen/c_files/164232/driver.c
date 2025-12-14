#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 18149334299569329445ULL;
unsigned long long int var_4 = 7881568946826075353ULL;
unsigned long long int var_6 = 17149178672217483603ULL;
unsigned long long int var_14 = 3577367922360917756ULL;
int zero = 0;
unsigned long long int var_16 = 7394357516188676222ULL;
unsigned long long int var_17 = 14806986667051155238ULL;
unsigned long long int var_18 = 1586980998737888585ULL;
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
