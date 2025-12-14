#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 840564730679389536LL;
unsigned char var_6 = (unsigned char)123;
signed char var_12 = (signed char)41;
int var_13 = 1654400231;
unsigned long long int var_14 = 9974495240673610519ULL;
int zero = 0;
unsigned long long int var_19 = 12076509625142502567ULL;
long long int var_20 = 7426048738378317725LL;
unsigned long long int var_21 = 17570257869155437694ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
