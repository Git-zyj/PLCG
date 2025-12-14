#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8110860319950265424ULL;
short var_2 = (short)7493;
unsigned char var_3 = (unsigned char)101;
unsigned short var_4 = (unsigned short)63132;
signed char var_5 = (signed char)95;
long long int var_6 = -6668538747468650463LL;
unsigned short var_7 = (unsigned short)8047;
long long int var_8 = 5756072287646644623LL;
long long int var_10 = 1502189774633503323LL;
unsigned int var_14 = 1102919227U;
int zero = 0;
short var_15 = (short)2458;
unsigned char var_16 = (unsigned char)107;
long long int var_17 = -6982675012432971667LL;
unsigned int var_18 = 493899352U;
unsigned short var_19 = (unsigned short)30584;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
