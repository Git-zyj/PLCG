#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 1889911213455419132LL;
long long int var_5 = 4298526219404018950LL;
signed char var_8 = (signed char)110;
signed char var_11 = (signed char)25;
long long int var_13 = 8205343830341218052LL;
int zero = 0;
signed char var_14 = (signed char)120;
long long int var_15 = -9152038789013906881LL;
signed char var_16 = (signed char)-27;
long long int var_17 = 1389543030552714909LL;
long long int var_18 = -6951966924409992281LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
