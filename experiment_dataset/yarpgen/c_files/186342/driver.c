#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10745652797801974592ULL;
unsigned short var_5 = (unsigned short)1503;
signed char var_6 = (signed char)103;
unsigned char var_7 = (unsigned char)125;
long long int var_9 = -310455706522366357LL;
short var_10 = (short)24768;
unsigned int var_11 = 1718242376U;
long long int var_12 = -2030188728175084390LL;
signed char var_14 = (signed char)-110;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)90;
_Bool var_22 = (_Bool)1;
unsigned short var_23 = (unsigned short)8569;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
