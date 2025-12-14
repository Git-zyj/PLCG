#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 46009516282841851ULL;
_Bool var_4 = (_Bool)0;
unsigned long long int var_8 = 12690372032142245752ULL;
long long int var_13 = -8604721202051035516LL;
unsigned long long int var_14 = 17113971364307450139ULL;
long long int var_15 = 3851503773554855513LL;
int zero = 0;
long long int var_16 = 7251391209641237447LL;
unsigned long long int var_17 = 14020232579994003317ULL;
unsigned long long int var_18 = 3376496600706854824ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
