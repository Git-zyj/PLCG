#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -288202468;
unsigned short var_3 = (unsigned short)39530;
unsigned long long int var_4 = 12222497989374811649ULL;
int var_5 = 1451233903;
unsigned int var_7 = 586143211U;
int var_10 = -570459788;
int zero = 0;
unsigned long long int var_11 = 4557029325197680961ULL;
unsigned int var_12 = 2052799495U;
int var_13 = -1563626215;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
