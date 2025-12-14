#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -257638346;
long long int var_1 = 8870173961866716303LL;
int var_2 = 138104759;
unsigned char var_3 = (unsigned char)75;
short var_4 = (short)-13179;
unsigned long long int var_5 = 2272795435833615072ULL;
signed char var_6 = (signed char)-114;
unsigned long long int var_7 = 7372402774662882846ULL;
_Bool var_9 = (_Bool)1;
long long int var_10 = -4272331878466385178LL;
short var_11 = (short)-18657;
int zero = 0;
signed char var_12 = (signed char)82;
unsigned char var_13 = (unsigned char)47;
unsigned char var_14 = (unsigned char)51;
unsigned long long int var_15 = 868388357008698015ULL;
int var_16 = 756310461;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
