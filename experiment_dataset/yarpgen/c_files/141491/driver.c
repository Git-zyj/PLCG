#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1373162938U;
long long int var_1 = 5965290539689586224LL;
unsigned short var_3 = (unsigned short)13873;
unsigned int var_4 = 4221927785U;
signed char var_7 = (signed char)89;
unsigned char var_13 = (unsigned char)199;
short var_14 = (short)-30746;
long long int var_15 = -8718723413770255819LL;
int zero = 0;
unsigned char var_17 = (unsigned char)169;
signed char var_18 = (signed char)22;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
