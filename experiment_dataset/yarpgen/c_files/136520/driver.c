#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)67;
long long int var_1 = -7842573120041435126LL;
unsigned char var_2 = (unsigned char)213;
unsigned long long int var_3 = 10180624347948809978ULL;
short var_4 = (short)5787;
_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 13399229475844082995ULL;
signed char var_7 = (signed char)120;
int zero = 0;
signed char var_10 = (signed char)-103;
unsigned char var_11 = (unsigned char)230;
unsigned int var_12 = 1270786840U;
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
