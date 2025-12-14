#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)223;
_Bool var_4 = (_Bool)0;
unsigned long long int var_6 = 3073477765782426599ULL;
signed char var_8 = (signed char)-31;
unsigned short var_9 = (unsigned short)44481;
unsigned long long int var_10 = 10186067280615277050ULL;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)-3;
int zero = 0;
signed char var_14 = (signed char)30;
unsigned short var_15 = (unsigned short)53884;
short var_16 = (short)-29416;
unsigned long long int var_17 = 11545404569384309036ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
