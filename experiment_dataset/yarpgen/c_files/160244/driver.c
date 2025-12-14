#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -989901002210767791LL;
int var_6 = 1155664702;
int var_7 = 1548607624;
int zero = 0;
long long int var_12 = -1075409134573700487LL;
long long int var_13 = 6192514738063337248LL;
unsigned int var_14 = 4227668984U;
int var_15 = -936101314;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
