#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-114;
unsigned long long int var_4 = 2030648181653225368ULL;
unsigned short var_7 = (unsigned short)20913;
unsigned long long int var_8 = 17378467348023825819ULL;
int zero = 0;
signed char var_17 = (signed char)-84;
unsigned long long int var_18 = 8676503657746700191ULL;
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
