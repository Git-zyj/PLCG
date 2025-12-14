#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2401539171U;
_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)0;
long long int var_3 = -2027391257004096376LL;
unsigned int var_5 = 2586837032U;
signed char var_6 = (signed char)-99;
_Bool var_7 = (_Bool)0;
unsigned int var_8 = 1345933528U;
unsigned char var_9 = (unsigned char)167;
int zero = 0;
unsigned char var_10 = (unsigned char)35;
long long int var_11 = -3543814292389351692LL;
short var_12 = (short)25913;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
