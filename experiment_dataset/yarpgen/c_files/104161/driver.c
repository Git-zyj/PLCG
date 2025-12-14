#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2211192735388103533LL;
unsigned char var_5 = (unsigned char)142;
long long int var_10 = -4723253334887235985LL;
signed char var_11 = (signed char)-108;
unsigned char var_12 = (unsigned char)5;
long long int var_16 = 4641672437723458107LL;
int zero = 0;
short var_17 = (short)9584;
unsigned char var_18 = (unsigned char)199;
unsigned long long int var_19 = 1162827143842274810ULL;
signed char var_20 = (signed char)-29;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
