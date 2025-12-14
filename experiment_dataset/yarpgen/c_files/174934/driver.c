#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4777065364811336464LL;
short var_1 = (short)10231;
long long int var_3 = -86644335929187914LL;
long long int var_4 = 7596750785056663420LL;
unsigned char var_6 = (unsigned char)67;
unsigned char var_8 = (unsigned char)172;
long long int var_11 = 4218174610141939865LL;
int zero = 0;
_Bool var_12 = (_Bool)1;
short var_13 = (short)19679;
short var_14 = (short)28244;
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
