#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 877963743;
unsigned long long int var_5 = 18011286282740346635ULL;
short var_6 = (short)-3994;
signed char var_10 = (signed char)71;
int zero = 0;
long long int var_11 = 1821754786906171401LL;
long long int var_12 = 5893491706271215171LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
