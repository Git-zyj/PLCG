#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)53;
unsigned short var_1 = (unsigned short)61994;
unsigned long long int var_2 = 16804670760932357199ULL;
long long int var_3 = -8396827387951552861LL;
unsigned long long int var_4 = 17151399318339499784ULL;
unsigned char var_6 = (unsigned char)144;
unsigned int var_8 = 1647765347U;
unsigned short var_11 = (unsigned short)60995;
int zero = 0;
unsigned char var_12 = (unsigned char)64;
signed char var_13 = (signed char)35;
long long int var_14 = 3235672690614571647LL;
int var_15 = 499623260;
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
