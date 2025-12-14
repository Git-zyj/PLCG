#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)176;
unsigned long long int var_4 = 3628617999201489299ULL;
long long int var_7 = -7413525001018083724LL;
unsigned short var_8 = (unsigned short)10734;
signed char var_10 = (signed char)53;
short var_13 = (short)10962;
signed char var_15 = (signed char)-24;
unsigned int var_16 = 468011612U;
int zero = 0;
long long int var_18 = 4827184895430493365LL;
_Bool var_19 = (_Bool)1;
short var_20 = (short)-23009;
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
