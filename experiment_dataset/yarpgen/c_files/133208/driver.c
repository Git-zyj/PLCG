#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1151833563;
_Bool var_6 = (_Bool)1;
long long int var_11 = 793824697800762330LL;
int var_12 = -2145299515;
unsigned short var_15 = (unsigned short)61376;
unsigned short var_17 = (unsigned short)58455;
int zero = 0;
long long int var_20 = 1841340419723990945LL;
unsigned char var_21 = (unsigned char)202;
int var_22 = 1782010399;
long long int var_23 = -5953277569868912658LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
