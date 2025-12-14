#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)104;
signed char var_1 = (signed char)8;
unsigned int var_2 = 3332674119U;
_Bool var_6 = (_Bool)0;
short var_7 = (short)16866;
short var_8 = (short)13280;
signed char var_9 = (signed char)101;
unsigned char var_12 = (unsigned char)155;
int zero = 0;
unsigned long long int var_13 = 964219475469079533ULL;
short var_14 = (short)9682;
short var_15 = (short)-14717;
unsigned int var_16 = 722003623U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
