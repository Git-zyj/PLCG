#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
signed char var_3 = (signed char)-114;
_Bool var_4 = (_Bool)1;
short var_5 = (short)21273;
_Bool var_6 = (_Bool)0;
signed char var_7 = (signed char)60;
unsigned int var_8 = 4229278271U;
unsigned char var_9 = (unsigned char)25;
int zero = 0;
long long int var_12 = 7290999864739181543LL;
signed char var_13 = (signed char)70;
unsigned short var_14 = (unsigned short)12024;
signed char var_15 = (signed char)58;
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
