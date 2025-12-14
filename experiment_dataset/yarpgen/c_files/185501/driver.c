#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5204654191617951336ULL;
unsigned long long int var_3 = 13538790700526872748ULL;
unsigned long long int var_4 = 8951215693287870617ULL;
long long int var_11 = 3176046526769992772LL;
long long int var_19 = -8856481051607254433LL;
int zero = 0;
long long int var_20 = 861576275153890456LL;
signed char var_21 = (signed char)18;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
