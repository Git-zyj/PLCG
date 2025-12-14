#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-7051;
unsigned char var_4 = (unsigned char)240;
signed char var_6 = (signed char)-37;
int var_9 = -775648987;
signed char var_11 = (signed char)80;
short var_13 = (short)18553;
unsigned short var_14 = (unsigned short)11739;
unsigned short var_17 = (unsigned short)24595;
signed char var_19 = (signed char)-53;
int zero = 0;
unsigned long long int var_20 = 12076050035804740109ULL;
_Bool var_21 = (_Bool)1;
long long int var_22 = -7132405097900922830LL;
unsigned short var_23 = (unsigned short)29706;
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
