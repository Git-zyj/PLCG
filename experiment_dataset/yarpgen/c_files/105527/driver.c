#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-56;
unsigned long long int var_1 = 14480544276656516526ULL;
unsigned int var_6 = 1800434158U;
unsigned int var_7 = 683647646U;
int var_8 = -192265381;
unsigned short var_10 = (unsigned short)20966;
unsigned short var_13 = (unsigned short)43300;
unsigned short var_14 = (unsigned short)28486;
signed char var_16 = (signed char)-25;
int zero = 0;
long long int var_17 = -4938004027102796286LL;
long long int var_18 = 4235066507498422343LL;
long long int var_19 = 1983561572944365673LL;
short var_20 = (short)19031;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
