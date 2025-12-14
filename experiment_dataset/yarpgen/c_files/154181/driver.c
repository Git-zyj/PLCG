#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 5145074226342842644ULL;
unsigned char var_6 = (unsigned char)217;
unsigned int var_7 = 644533349U;
signed char var_10 = (signed char)107;
int zero = 0;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)117;
long long int var_14 = 8514216865866179387LL;
int var_15 = -709162942;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
