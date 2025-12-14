#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2315040076U;
unsigned int var_2 = 176727720U;
int var_3 = -1741954786;
unsigned int var_5 = 3764714266U;
unsigned short var_6 = (unsigned short)24672;
int var_7 = 959382094;
long long int var_9 = 8965762685088673514LL;
int zero = 0;
long long int var_10 = -2757204226270556744LL;
unsigned short var_11 = (unsigned short)64091;
unsigned long long int var_12 = 14085797542042116918ULL;
unsigned int var_13 = 1830731792U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
