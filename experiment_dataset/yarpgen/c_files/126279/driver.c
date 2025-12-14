#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-9505;
_Bool var_1 = (_Bool)0;
unsigned short var_4 = (unsigned short)43918;
long long int var_6 = -896129989385529122LL;
long long int var_12 = -8001213189073448339LL;
int zero = 0;
long long int var_19 = 8233398245398579957LL;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)17724;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
