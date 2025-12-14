#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-16856;
int var_2 = 1511638477;
_Bool var_3 = (_Bool)0;
int var_7 = -506838426;
long long int var_8 = -4109143759046631258LL;
int zero = 0;
unsigned char var_12 = (unsigned char)173;
unsigned short var_13 = (unsigned short)57438;
int var_14 = -1099623877;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
