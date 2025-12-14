#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)110;
int var_3 = 1405265231;
short var_4 = (short)31045;
short var_5 = (short)-9412;
unsigned char var_7 = (unsigned char)220;
long long int var_9 = -5549820957541328978LL;
signed char var_11 = (signed char)-36;
short var_12 = (short)-25398;
_Bool var_13 = (_Bool)0;
int zero = 0;
short var_14 = (short)-25159;
int var_15 = -1370991237;
void init() {
}

void checksum() {
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
