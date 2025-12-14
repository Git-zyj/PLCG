#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 9482385024284356207ULL;
unsigned long long int var_11 = 2053315388077538224ULL;
unsigned char var_13 = (unsigned char)131;
short var_14 = (short)5569;
int zero = 0;
short var_17 = (short)25670;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
