#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)6747;
unsigned long long int var_9 = 12815573222842224281ULL;
long long int var_10 = -6338099352803993044LL;
int var_11 = 107919248;
int zero = 0;
int var_13 = -891133964;
short var_14 = (short)6129;
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
