#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-41;
signed char var_3 = (signed char)108;
long long int var_5 = 1682671916723182623LL;
unsigned int var_7 = 1689094518U;
unsigned short var_8 = (unsigned short)49589;
unsigned char var_9 = (unsigned char)63;
unsigned int var_10 = 1478808097U;
long long int var_11 = 621846580715041065LL;
unsigned char var_12 = (unsigned char)32;
long long int var_14 = -8157654714875710818LL;
unsigned short var_15 = (unsigned short)41211;
unsigned long long int var_16 = 1182004998544889063ULL;
int zero = 0;
unsigned long long int var_18 = 14470416799804533225ULL;
unsigned int var_19 = 1837165976U;
unsigned int var_20 = 3142303245U;
void init() {
}

void checksum() {
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
