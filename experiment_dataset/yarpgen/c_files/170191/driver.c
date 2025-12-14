#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)62667;
_Bool var_3 = (_Bool)1;
int var_4 = -16934659;
unsigned short var_5 = (unsigned short)32791;
_Bool var_9 = (_Bool)0;
short var_15 = (short)20515;
int var_16 = -2131800376;
int zero = 0;
short var_17 = (short)7741;
unsigned char var_18 = (unsigned char)209;
short var_19 = (short)32331;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
