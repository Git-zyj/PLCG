#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3146503263234800425ULL;
unsigned long long int var_1 = 8649499851923947049ULL;
_Bool var_4 = (_Bool)1;
unsigned char var_9 = (unsigned char)47;
unsigned char var_10 = (unsigned char)155;
int zero = 0;
unsigned long long int var_11 = 5435423509161846562ULL;
unsigned char var_12 = (unsigned char)198;
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
