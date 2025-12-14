#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)8910;
_Bool var_5 = (_Bool)0;
short var_6 = (short)26677;
unsigned char var_7 = (unsigned char)47;
int zero = 0;
unsigned short var_11 = (unsigned short)51328;
unsigned long long int var_12 = 7877889711293680904ULL;
long long int var_13 = -6496115538325506467LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
