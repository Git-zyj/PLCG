#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3368549162740360092ULL;
unsigned long long int var_1 = 8204930116063447410ULL;
unsigned long long int var_2 = 2150797952129227785ULL;
unsigned long long int var_5 = 5449960129318557116ULL;
unsigned long long int var_6 = 15656990388119046140ULL;
unsigned long long int var_7 = 2013947937166040895ULL;
int zero = 0;
unsigned long long int var_12 = 4705499129686391969ULL;
unsigned long long int var_13 = 4326115392891483184ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
