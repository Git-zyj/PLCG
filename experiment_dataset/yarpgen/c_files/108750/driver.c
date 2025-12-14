#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3853245593U;
long long int var_3 = -3481137424022067787LL;
unsigned char var_5 = (unsigned char)45;
long long int var_7 = 1147358728365836639LL;
long long int var_8 = 5769838197114710460LL;
int zero = 0;
signed char var_10 = (signed char)-118;
unsigned long long int var_11 = 13737308271872433617ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
