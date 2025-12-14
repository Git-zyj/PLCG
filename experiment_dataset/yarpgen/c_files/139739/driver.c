#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)9551;
unsigned char var_10 = (unsigned char)160;
int var_12 = 1280635839;
int zero = 0;
int var_13 = -886396827;
unsigned long long int var_14 = 3980686262056201853ULL;
long long int var_15 = -3345237225766297637LL;
unsigned long long int var_16 = 16822116052614895556ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
