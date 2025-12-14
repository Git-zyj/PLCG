#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_5 = 1983417675;
_Bool var_8 = (_Bool)0;
unsigned char var_9 = (unsigned char)89;
unsigned int var_10 = 1469245314U;
short var_11 = (short)5894;
unsigned int var_13 = 3422842413U;
int var_14 = -677266742;
int zero = 0;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)-32;
long long int var_18 = 8361332756766079089LL;
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
