#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned char var_9 = (unsigned char)148;
long long int var_11 = 8065053147731300364LL;
long long int var_12 = -7559591343280398824LL;
unsigned long long int var_14 = 16198572075905393811ULL;
int zero = 0;
long long int var_15 = -7843656989549569714LL;
signed char var_16 = (signed char)-10;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
