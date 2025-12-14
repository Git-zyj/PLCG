#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5385188271099830181LL;
unsigned short var_2 = (unsigned short)44994;
unsigned short var_4 = (unsigned short)31050;
long long int var_10 = 5626995230568582672LL;
unsigned char var_11 = (unsigned char)200;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)-1;
signed char var_16 = (signed char)-22;
int zero = 0;
unsigned long long int var_19 = 6545265343361380739ULL;
unsigned long long int var_20 = 10298545865868141365ULL;
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
