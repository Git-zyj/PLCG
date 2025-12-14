#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-92;
unsigned int var_3 = 1416843484U;
long long int var_4 = 5179059348474837994LL;
unsigned char var_5 = (unsigned char)182;
short var_7 = (short)-16863;
signed char var_8 = (signed char)-39;
short var_9 = (short)-1002;
int zero = 0;
short var_12 = (short)11673;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 14032176679734413534ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
