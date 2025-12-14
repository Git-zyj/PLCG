#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)204;
unsigned long long int var_4 = 16238070404329323901ULL;
short var_5 = (short)23899;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)53573;
unsigned long long int var_8 = 11768355064446000915ULL;
short var_9 = (short)10061;
signed char var_10 = (signed char)-46;
unsigned char var_13 = (unsigned char)250;
signed char var_15 = (signed char)-13;
int zero = 0;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)20;
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
