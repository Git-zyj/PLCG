#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1200338598U;
unsigned int var_4 = 790560064U;
short var_13 = (short)8730;
long long int var_16 = -5558905104699693257LL;
int zero = 0;
unsigned long long int var_17 = 1676519408071662760ULL;
long long int var_18 = -7982203758305518688LL;
long long int var_19 = -5593336443619081406LL;
unsigned char var_20 = (unsigned char)140;
long long int var_21 = 910692565403068729LL;
unsigned int var_22 = 1858394072U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
