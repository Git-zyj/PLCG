#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 6408377324178629023LL;
long long int var_3 = -2168121084113266189LL;
signed char var_5 = (signed char)-87;
unsigned char var_7 = (unsigned char)61;
short var_8 = (short)11407;
unsigned char var_9 = (unsigned char)167;
signed char var_10 = (signed char)-41;
long long int var_11 = 7553468865440438769LL;
long long int var_12 = 7264056517553181417LL;
int zero = 0;
long long int var_14 = 7479541916652295018LL;
long long int var_15 = -6822419119524085904LL;
short var_16 = (short)7125;
void init() {
}

void checksum() {
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
