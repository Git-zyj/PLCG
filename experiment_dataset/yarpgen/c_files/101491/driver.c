#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 9416164600108871219ULL;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 6971299271013092919ULL;
unsigned long long int var_5 = 11652011875328340726ULL;
int zero = 0;
unsigned long long int var_10 = 6004270964552541903ULL;
unsigned long long int var_11 = 1356038964968857993ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
