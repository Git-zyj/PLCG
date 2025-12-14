#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 10548537410809430139ULL;
unsigned long long int var_7 = 11270228977196583612ULL;
unsigned long long int var_8 = 18190457921694516459ULL;
int zero = 0;
unsigned long long int var_10 = 3576459577885464120ULL;
unsigned long long int var_11 = 8991225439002898522ULL;
unsigned long long int var_12 = 2998412753562629687ULL;
unsigned long long int var_13 = 12777949142610052871ULL;
unsigned long long int var_14 = 5379745681312149678ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
