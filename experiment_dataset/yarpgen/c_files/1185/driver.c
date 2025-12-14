#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 212109660;
long long int var_4 = -1287965603511453037LL;
unsigned char var_5 = (unsigned char)17;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned long long int var_18 = 14710220744921693625ULL;
short var_19 = (short)29506;
long long int var_20 = 8896105404219670673LL;
void init() {
}

void checksum() {
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
