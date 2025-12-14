#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_4 = 722667802;
short var_6 = (short)-29385;
_Bool var_7 = (_Bool)0;
short var_10 = (short)-28332;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned long long int var_20 = 15913134961911453505ULL;
unsigned char var_21 = (unsigned char)176;
unsigned long long int var_22 = 15512139162033039987ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
