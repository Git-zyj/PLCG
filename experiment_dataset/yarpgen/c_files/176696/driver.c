#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)89;
int var_1 = 1914089116;
unsigned char var_9 = (unsigned char)17;
unsigned short var_10 = (unsigned short)51384;
unsigned char var_12 = (unsigned char)57;
long long int var_13 = -6994321950510650707LL;
int zero = 0;
unsigned char var_16 = (unsigned char)123;
unsigned char var_17 = (unsigned char)117;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
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
