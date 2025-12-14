#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1829240146387257393ULL;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)112;
unsigned char var_10 = (unsigned char)223;
int zero = 0;
int var_14 = 102801690;
short var_15 = (short)4740;
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
