#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4174007972258510431ULL;
int var_2 = -273827552;
short var_3 = (short)3130;
unsigned int var_4 = 3305433371U;
signed char var_8 = (signed char)116;
unsigned int var_9 = 346790620U;
int var_11 = -475156001;
unsigned char var_15 = (unsigned char)16;
signed char var_17 = (signed char)-80;
unsigned char var_18 = (unsigned char)151;
int zero = 0;
_Bool var_19 = (_Bool)1;
short var_20 = (short)6533;
unsigned char var_21 = (unsigned char)203;
long long int var_22 = 3369509779981272517LL;
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
