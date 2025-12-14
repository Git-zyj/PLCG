#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 140464407577584037ULL;
unsigned long long int var_5 = 17243472303793284707ULL;
unsigned short var_6 = (unsigned short)18019;
unsigned long long int var_9 = 14915999894348653016ULL;
unsigned int var_11 = 3820955860U;
unsigned short var_15 = (unsigned short)12514;
unsigned int var_18 = 817288853U;
int zero = 0;
long long int var_19 = 6873920887797303673LL;
long long int var_20 = -3578625259724736466LL;
void init() {
}

void checksum() {
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
