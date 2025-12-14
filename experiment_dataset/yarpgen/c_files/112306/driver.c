#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1413785690;
long long int var_8 = 676352905107982246LL;
short var_9 = (short)27721;
short var_11 = (short)5522;
int zero = 0;
long long int var_12 = 8174380925550103022LL;
unsigned long long int var_13 = 10845789444536509639ULL;
unsigned char var_14 = (unsigned char)141;
unsigned long long int var_15 = 7783091434384196834ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
