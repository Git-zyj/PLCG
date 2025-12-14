#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2507646322U;
unsigned int var_2 = 1899281786U;
signed char var_7 = (signed char)117;
unsigned char var_10 = (unsigned char)167;
long long int var_11 = 8064663634789446558LL;
unsigned short var_13 = (unsigned short)33768;
long long int var_16 = -9092359657634764513LL;
int zero = 0;
long long int var_17 = 281769796511143238LL;
long long int var_18 = 3245558005382630819LL;
unsigned char var_19 = (unsigned char)3;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
