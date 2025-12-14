#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16882890165810947046ULL;
signed char var_10 = (signed char)-106;
signed char var_11 = (signed char)40;
signed char var_13 = (signed char)3;
int zero = 0;
unsigned long long int var_16 = 13285314615744106470ULL;
unsigned short var_17 = (unsigned short)50428;
long long int var_18 = -4280619292702003684LL;
unsigned int var_19 = 2597543898U;
signed char var_20 = (signed char)-114;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
