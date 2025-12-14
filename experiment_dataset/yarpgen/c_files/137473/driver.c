#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7754723591250891046LL;
unsigned char var_1 = (unsigned char)251;
unsigned char var_6 = (unsigned char)56;
long long int var_10 = -3583046873672800544LL;
int zero = 0;
int var_20 = 526921569;
int var_21 = -404410991;
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
