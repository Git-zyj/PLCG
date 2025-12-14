#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1885436812U;
unsigned int var_5 = 2286385850U;
int var_7 = -259579542;
unsigned int var_9 = 614981307U;
long long int var_14 = -2985521410984199942LL;
int zero = 0;
long long int var_17 = 2825088272717704345LL;
unsigned long long int var_18 = 16550242411370781445ULL;
long long int var_19 = -9206657947413587200LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
