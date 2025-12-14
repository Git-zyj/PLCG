#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-14;
unsigned short var_1 = (unsigned short)46269;
signed char var_2 = (signed char)89;
short var_3 = (short)27747;
int var_5 = -1729671093;
signed char var_6 = (signed char)51;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 1879708772U;
int zero = 0;
unsigned long long int var_10 = 7727463386254712427ULL;
short var_11 = (short)2954;
unsigned char var_12 = (unsigned char)93;
short var_13 = (short)-31301;
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
