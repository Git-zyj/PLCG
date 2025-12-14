#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15630315466965209696ULL;
int var_4 = -2012506239;
short var_7 = (short)6926;
unsigned int var_11 = 1149902671U;
unsigned int var_13 = 2833155567U;
int var_14 = 2078087845;
long long int var_15 = -4426809433815680613LL;
int zero = 0;
unsigned int var_16 = 3075266160U;
unsigned long long int var_17 = 867333792147532719ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
