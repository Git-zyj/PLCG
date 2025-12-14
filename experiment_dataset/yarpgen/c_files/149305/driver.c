#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)25040;
short var_6 = (short)29202;
long long int var_10 = 8895222599471469569LL;
int var_12 = 1622353469;
_Bool var_13 = (_Bool)1;
int zero = 0;
_Bool var_16 = (_Bool)1;
long long int var_17 = -3936170791657330556LL;
unsigned char var_18 = (unsigned char)85;
long long int var_19 = 4882566388209262160LL;
long long int var_20 = -4258664407028502374LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
