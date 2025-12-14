#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2679425553714051212ULL;
unsigned long long int var_1 = 1914776155157916439ULL;
unsigned long long int var_4 = 17184525771038005906ULL;
unsigned short var_9 = (unsigned short)16528;
unsigned short var_10 = (unsigned short)27537;
int zero = 0;
long long int var_14 = 5966792775339275965LL;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 704225338U;
short var_17 = (short)-3005;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
