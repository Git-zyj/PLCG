#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 3326148535911616511ULL;
unsigned long long int var_6 = 2771989048688751778ULL;
unsigned char var_7 = (unsigned char)201;
int var_10 = 162583254;
int zero = 0;
long long int var_14 = -3567041291569147274LL;
long long int var_15 = -9042751195886962756LL;
unsigned short var_16 = (unsigned short)5949;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
