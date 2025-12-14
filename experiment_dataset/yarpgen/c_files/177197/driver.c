#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)229;
unsigned short var_5 = (unsigned short)62688;
unsigned long long int var_9 = 18383223429103554485ULL;
int zero = 0;
unsigned long long int var_10 = 17846888842115671526ULL;
unsigned char var_11 = (unsigned char)254;
unsigned long long int var_12 = 16365032077589448572ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
