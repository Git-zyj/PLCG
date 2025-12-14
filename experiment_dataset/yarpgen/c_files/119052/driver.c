#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)90;
_Bool var_3 = (_Bool)0;
long long int var_4 = 3137557204042093114LL;
unsigned short var_7 = (unsigned short)5735;
int zero = 0;
unsigned short var_10 = (unsigned short)28828;
long long int var_11 = -1303807472778669800LL;
short var_12 = (short)19707;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
