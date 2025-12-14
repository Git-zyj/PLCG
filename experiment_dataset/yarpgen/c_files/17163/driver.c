#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2460577641221941238LL;
long long int var_4 = 5473096418833828496LL;
long long int var_8 = -7695014554736110544LL;
int zero = 0;
long long int var_12 = -64009582938984895LL;
long long int var_13 = 3212648477435121831LL;
long long int var_14 = -6774210331086034627LL;
void init() {
}

void checksum() {
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
