#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 9962037441732450243ULL;
unsigned long long int var_11 = 13421033389562291134ULL;
unsigned long long int var_12 = 1857065198268835164ULL;
unsigned long long int var_17 = 1640974727570698326ULL;
unsigned long long int var_18 = 6092618825505284243ULL;
int zero = 0;
unsigned long long int var_19 = 4154766009630607992ULL;
unsigned long long int var_20 = 1340076318725072496ULL;
unsigned long long int var_21 = 4790194812104691744ULL;
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
