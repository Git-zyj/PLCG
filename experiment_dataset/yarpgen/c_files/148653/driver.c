#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 12936640516112711589ULL;
_Bool var_11 = (_Bool)0;
unsigned long long int var_13 = 9879267824720262840ULL;
unsigned short var_14 = (unsigned short)40771;
int zero = 0;
long long int var_20 = 2839767963706311953LL;
unsigned int var_21 = 211116660U;
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
