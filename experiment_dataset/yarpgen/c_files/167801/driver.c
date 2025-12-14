#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 1969392357886101402ULL;
unsigned long long int var_11 = 6083495673466146601ULL;
unsigned long long int var_16 = 3577866379194336175ULL;
int zero = 0;
unsigned long long int var_17 = 2766171169375003907ULL;
unsigned long long int var_18 = 9446005259106666132ULL;
unsigned long long int var_19 = 10786718124513779373ULL;
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
