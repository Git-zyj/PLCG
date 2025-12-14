#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4756287218392152306ULL;
long long int var_4 = -3963258065908885634LL;
unsigned char var_7 = (unsigned char)110;
unsigned char var_9 = (unsigned char)121;
unsigned long long int var_10 = 4852592222916431374ULL;
unsigned short var_11 = (unsigned short)39538;
int zero = 0;
unsigned char var_15 = (unsigned char)44;
unsigned long long int var_16 = 16506424123258016796ULL;
void init() {
}

void checksum() {
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
