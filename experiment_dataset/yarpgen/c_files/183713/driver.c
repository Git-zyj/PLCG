#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)94;
unsigned long long int var_6 = 3264738276214893797ULL;
unsigned long long int var_7 = 11904497491052074342ULL;
unsigned long long int var_8 = 13302145414662982718ULL;
short var_14 = (short)-21892;
signed char var_15 = (signed char)-112;
_Bool var_16 = (_Bool)1;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)196;
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
