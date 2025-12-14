#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1476058747;
unsigned int var_2 = 3725308475U;
int var_3 = 475065884;
unsigned char var_4 = (unsigned char)176;
short var_5 = (short)-14007;
int var_9 = -811402929;
int var_11 = -960490467;
int zero = 0;
int var_13 = -673733953;
signed char var_14 = (signed char)-82;
signed char var_15 = (signed char)83;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
