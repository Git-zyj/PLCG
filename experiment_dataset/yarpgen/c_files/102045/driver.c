#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 296038890U;
unsigned char var_2 = (unsigned char)222;
_Bool var_3 = (_Bool)1;
_Bool var_5 = (_Bool)0;
short var_7 = (short)21952;
short var_8 = (short)30123;
signed char var_9 = (signed char)86;
unsigned short var_10 = (unsigned short)27967;
unsigned char var_13 = (unsigned char)188;
short var_16 = (short)10307;
int zero = 0;
short var_18 = (short)30720;
unsigned long long int var_19 = 4413512143315801656ULL;
unsigned char var_20 = (unsigned char)216;
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
