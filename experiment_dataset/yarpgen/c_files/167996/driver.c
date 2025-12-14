#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 593539709051857578LL;
short var_7 = (short)-14757;
long long int var_15 = 7266671116742329746LL;
short var_18 = (short)-18711;
int zero = 0;
long long int var_19 = -2592036315300460599LL;
long long int var_20 = -6416256883331092587LL;
void init() {
}

void checksum() {
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
