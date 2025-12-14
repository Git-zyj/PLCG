#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 13142919399946791466ULL;
unsigned long long int var_5 = 16870056983530320157ULL;
unsigned long long int var_8 = 16465815810265116124ULL;
int zero = 0;
signed char var_17 = (signed char)85;
unsigned long long int var_18 = 13952414058871922648ULL;
unsigned char var_19 = (unsigned char)241;
unsigned char var_20 = (unsigned char)236;
unsigned char var_21 = (unsigned char)116;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
