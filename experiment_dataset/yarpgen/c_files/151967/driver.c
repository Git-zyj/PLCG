#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 368125876U;
unsigned int var_2 = 1878459200U;
unsigned long long int var_7 = 4110619592195182442ULL;
_Bool var_8 = (_Bool)0;
unsigned short var_9 = (unsigned short)42602;
unsigned char var_13 = (unsigned char)137;
unsigned int var_17 = 2411664234U;
int zero = 0;
signed char var_18 = (signed char)-40;
unsigned short var_19 = (unsigned short)26095;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)75;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
