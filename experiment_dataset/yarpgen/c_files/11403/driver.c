#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)20684;
unsigned int var_3 = 3397093411U;
long long int var_10 = -8691154871943677706LL;
unsigned short var_12 = (unsigned short)49266;
int var_13 = 498541936;
long long int var_15 = -2305921520701647852LL;
unsigned long long int var_18 = 16464875747777258972ULL;
int zero = 0;
int var_19 = 1012863527;
unsigned int var_20 = 2511600833U;
unsigned int var_21 = 3947711324U;
long long int var_22 = 2469862096736499480LL;
void init() {
}

void checksum() {
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
