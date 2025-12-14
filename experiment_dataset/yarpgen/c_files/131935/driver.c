#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8539080316487647760LL;
long long int var_1 = -60136471505752059LL;
long long int var_7 = -3519455630973060983LL;
unsigned long long int var_8 = 15585981414932578667ULL;
short var_9 = (short)-19304;
unsigned long long int var_10 = 7395572453743127396ULL;
int zero = 0;
unsigned char var_11 = (unsigned char)240;
long long int var_12 = 8444401100936717456LL;
short var_13 = (short)10211;
long long int var_14 = 3216852648075684746LL;
long long int var_15 = -3547355934344688527LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
