#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-107;
signed char var_3 = (signed char)84;
unsigned long long int var_6 = 309578105694355540ULL;
short var_10 = (short)30292;
unsigned long long int var_11 = 14835981323040341335ULL;
int zero = 0;
long long int var_14 = -8375967023203733712LL;
long long int var_15 = -644254729902966627LL;
short var_16 = (short)-3920;
unsigned long long int var_17 = 3853591507335529702ULL;
unsigned char var_18 = (unsigned char)223;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
