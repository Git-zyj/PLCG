#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 4182167654252941663LL;
_Bool var_5 = (_Bool)1;
unsigned short var_7 = (unsigned short)45071;
unsigned short var_8 = (unsigned short)43469;
long long int var_10 = 5976771672768935063LL;
int var_11 = -122293972;
int zero = 0;
long long int var_12 = 9208732092405988400LL;
unsigned short var_13 = (unsigned short)6553;
short var_14 = (short)-25850;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
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
