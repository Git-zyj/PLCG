#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-28626;
long long int var_2 = -8013912476083406465LL;
short var_4 = (short)-11070;
unsigned char var_5 = (unsigned char)92;
short var_12 = (short)-3506;
int zero = 0;
signed char var_19 = (signed char)121;
_Bool var_20 = (_Bool)1;
int var_21 = -324485644;
signed char var_22 = (signed char)-52;
_Bool var_23 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
