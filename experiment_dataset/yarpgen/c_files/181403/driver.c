#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_4 = (unsigned char)161;
unsigned int var_7 = 2467480580U;
unsigned int var_8 = 4162032386U;
unsigned long long int var_10 = 14104449946534429400ULL;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 16230868075546274381ULL;
int zero = 0;
int var_17 = 1424111915;
long long int var_18 = 5828409683743802797LL;
unsigned short var_19 = (unsigned short)41305;
void init() {
}

void checksum() {
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
