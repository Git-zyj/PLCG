#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)3;
long long int var_8 = -699983157421192335LL;
unsigned long long int var_10 = 6778324143331561630ULL;
unsigned short var_11 = (unsigned short)33587;
int zero = 0;
long long int var_13 = 7306298812293304704LL;
signed char var_14 = (signed char)-125;
long long int var_15 = -557513636095912457LL;
void init() {
}

void checksum() {
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
