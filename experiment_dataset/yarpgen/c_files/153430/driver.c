#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)38;
short var_6 = (short)3154;
short var_7 = (short)4242;
long long int var_11 = 2872442455417101574LL;
unsigned int var_13 = 3103491830U;
long long int var_15 = -4886187140823828742LL;
unsigned char var_19 = (unsigned char)128;
int zero = 0;
int var_20 = 862931266;
unsigned char var_21 = (unsigned char)76;
unsigned char var_22 = (unsigned char)222;
unsigned int var_23 = 2188596075U;
long long int var_24 = 7930222431337918656LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
