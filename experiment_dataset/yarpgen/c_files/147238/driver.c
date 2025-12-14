#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 8703461805531289914LL;
short var_4 = (short)-12195;
long long int var_5 = -3130599661751618460LL;
unsigned char var_8 = (unsigned char)121;
unsigned char var_12 = (unsigned char)238;
int zero = 0;
unsigned long long int var_13 = 10800756699393829614ULL;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
