#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 6335414226592481843ULL;
unsigned long long int var_9 = 18318707559479517310ULL;
unsigned short var_18 = (unsigned short)32573;
int zero = 0;
unsigned long long int var_19 = 2425429028223763144ULL;
long long int var_20 = 9045016511922277679LL;
long long int var_21 = -5692001926480982568LL;
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
