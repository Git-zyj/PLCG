#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6303181324231563223ULL;
long long int var_4 = -2356275208095141658LL;
int var_6 = 1835378944;
int var_8 = 1156620850;
unsigned short var_11 = (unsigned short)15694;
int zero = 0;
long long int var_12 = -7846804313957648836LL;
int var_13 = 503757484;
unsigned long long int var_14 = 10765330989914009156ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
