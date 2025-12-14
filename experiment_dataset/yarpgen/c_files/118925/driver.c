#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -79335914550999007LL;
_Bool var_4 = (_Bool)0;
long long int var_7 = -5915444449855756096LL;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned long long int var_17 = 12410494218552911345ULL;
int var_18 = 1364616503;
void init() {
}

void checksum() {
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
