#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13083828252491490534ULL;
int var_2 = 1474436618;
int var_6 = -1795876027;
int zero = 0;
unsigned long long int var_18 = 8339314912195501412ULL;
unsigned char var_19 = (unsigned char)246;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
