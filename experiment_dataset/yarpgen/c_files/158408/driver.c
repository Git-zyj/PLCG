#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 5201672861911907997LL;
long long int var_6 = -1723435643453784662LL;
long long int var_11 = 4169720236883185915LL;
long long int var_14 = -8120473209637870766LL;
int zero = 0;
long long int var_19 = 6944317668939695808LL;
long long int var_20 = -2633329041109621563LL;
long long int var_21 = 9004854228873312613LL;
long long int var_22 = -5838716720745940296LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
