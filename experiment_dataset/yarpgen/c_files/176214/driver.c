#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6714280846130971477ULL;
unsigned long long int var_6 = 10147069053541115495ULL;
long long int var_10 = 6697552991445753031LL;
int zero = 0;
signed char var_14 = (signed char)-67;
signed char var_15 = (signed char)-32;
long long int var_16 = 1726444013459821464LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
