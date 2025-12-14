#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -340308932;
signed char var_2 = (signed char)57;
long long int var_5 = -9143690428128518811LL;
unsigned short var_10 = (unsigned short)10025;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned short var_15 = (unsigned short)38551;
unsigned int var_16 = 1516521957U;
void init() {
}

void checksum() {
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
