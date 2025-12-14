#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 9499890445596170355ULL;
unsigned long long int var_5 = 13282960833433721070ULL;
unsigned long long int var_7 = 18033334177011748514ULL;
signed char var_8 = (signed char)103;
long long int var_11 = 4860607698261809329LL;
short var_12 = (short)-11257;
short var_13 = (short)-8793;
int zero = 0;
long long int var_14 = -7935818002041415969LL;
unsigned char var_15 = (unsigned char)194;
void init() {
}

void checksum() {
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
