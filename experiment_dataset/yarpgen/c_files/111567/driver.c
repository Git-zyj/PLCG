#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2822254313U;
long long int var_7 = -6668366949858025235LL;
long long int var_13 = 2900706918919542613LL;
int zero = 0;
unsigned int var_18 = 3921510774U;
long long int var_19 = -6246242753748017172LL;
unsigned int var_20 = 614874961U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
