#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3449742708080108168ULL;
int var_3 = -1272719043;
long long int var_4 = 189544761295470290LL;
long long int var_9 = -7439758141202929927LL;
int zero = 0;
long long int var_12 = -6454903065699948355LL;
unsigned char var_13 = (unsigned char)142;
unsigned long long int var_14 = 12323751154738288145ULL;
signed char var_15 = (signed char)-81;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
