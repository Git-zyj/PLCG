#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15511043670633354450ULL;
int var_2 = 1840920536;
unsigned long long int var_5 = 12253069356166392457ULL;
unsigned char var_9 = (unsigned char)236;
unsigned long long int var_10 = 3594387493487817801ULL;
unsigned long long int var_14 = 16911547300667998449ULL;
int zero = 0;
_Bool var_15 = (_Bool)1;
long long int var_16 = -3605445599438862274LL;
int var_17 = -1348833902;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
