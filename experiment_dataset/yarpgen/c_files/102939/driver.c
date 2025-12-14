#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)65438;
unsigned short var_1 = (unsigned short)1107;
int var_3 = 1186841759;
signed char var_6 = (signed char)-12;
unsigned long long int var_7 = 330934991196549575ULL;
unsigned short var_9 = (unsigned short)14032;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 1128213406U;
unsigned int var_12 = 2141770403U;
unsigned short var_13 = (unsigned short)1271;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
