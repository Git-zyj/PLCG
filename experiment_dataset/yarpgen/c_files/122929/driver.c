#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2181336106U;
unsigned char var_1 = (unsigned char)104;
_Bool var_2 = (_Bool)0;
short var_3 = (short)-18207;
int var_5 = 334239005;
int var_7 = 16311846;
int zero = 0;
long long int var_13 = 8762853170579699649LL;
unsigned short var_14 = (unsigned short)8141;
short var_15 = (short)16360;
int var_16 = -2045840276;
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
