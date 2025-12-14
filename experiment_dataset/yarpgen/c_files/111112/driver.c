#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 4894725929665292251LL;
long long int var_4 = 8368176468047260698LL;
unsigned long long int var_5 = 8890199015450302910ULL;
int var_7 = 1301028306;
unsigned char var_13 = (unsigned char)15;
long long int var_16 = 1561968779650637688LL;
unsigned int var_17 = 401143908U;
unsigned char var_18 = (unsigned char)194;
int zero = 0;
unsigned char var_19 = (unsigned char)71;
int var_20 = 1116685327;
short var_21 = (short)23846;
int var_22 = 306478609;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
