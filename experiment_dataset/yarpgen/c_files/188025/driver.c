#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)177;
short var_2 = (short)4889;
long long int var_7 = 1412492187403820574LL;
unsigned long long int var_8 = 5762915710154309953ULL;
int var_11 = 249503557;
signed char var_15 = (signed char)-74;
int zero = 0;
int var_17 = 859539811;
short var_18 = (short)-22781;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
