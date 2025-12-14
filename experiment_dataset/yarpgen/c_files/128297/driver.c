#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2581890270U;
unsigned short var_3 = (unsigned short)32661;
unsigned long long int var_7 = 6015499636097455444ULL;
unsigned short var_9 = (unsigned short)10879;
unsigned int var_10 = 3727182107U;
unsigned char var_13 = (unsigned char)43;
unsigned char var_14 = (unsigned char)96;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)5210;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)54502;
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
