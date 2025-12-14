#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -7240395922030024994LL;
unsigned char var_3 = (unsigned char)120;
unsigned long long int var_4 = 3312146652884743897ULL;
signed char var_5 = (signed char)-101;
unsigned long long int var_9 = 5041398577951298404ULL;
int zero = 0;
short var_11 = (short)-22844;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)105;
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
