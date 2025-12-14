#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 6557746207498064130LL;
int var_12 = 1527533023;
int zero = 0;
long long int var_13 = -7967723329210319239LL;
long long int var_14 = -8231397856160042239LL;
unsigned long long int var_15 = 3830188668227984291ULL;
unsigned long long int var_16 = 7960747298166463047ULL;
unsigned long long int var_17 = 9159964113224736717ULL;
unsigned long long int arr_1 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 11211117617752425964ULL;
}

void checksum() {
    hash(&seed, var_13);
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
