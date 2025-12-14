#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -851873260;
unsigned char var_5 = (unsigned char)167;
unsigned long long int var_6 = 2644590554415876481ULL;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned long long int var_14 = 7950089824661284441ULL;
long long int var_15 = 6851821207040452128LL;
void init() {
}

void checksum() {
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
