#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)44626;
_Bool var_1 = (_Bool)1;
unsigned int var_2 = 4293595358U;
signed char var_4 = (signed char)56;
int var_7 = 1734235833;
unsigned int var_8 = 4116627461U;
int var_9 = 937319652;
int var_10 = -429144349;
signed char var_11 = (signed char)96;
long long int var_13 = -8648654905538749966LL;
unsigned char var_15 = (unsigned char)254;
long long int var_17 = -3318412721329065357LL;
int zero = 0;
int var_18 = 1910314340;
unsigned short var_19 = (unsigned short)45341;
long long int var_20 = -8859672309859044714LL;
void init() {
}

void checksum() {
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
