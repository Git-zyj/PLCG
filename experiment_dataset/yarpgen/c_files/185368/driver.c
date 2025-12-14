#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)208;
unsigned short var_3 = (unsigned short)38053;
signed char var_5 = (signed char)-61;
signed char var_7 = (signed char)-15;
unsigned int var_9 = 1603442180U;
_Bool var_11 = (_Bool)0;
short var_14 = (short)26708;
signed char var_15 = (signed char)-5;
unsigned char var_16 = (unsigned char)228;
int zero = 0;
unsigned char var_19 = (unsigned char)130;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)61966;
unsigned short var_22 = (unsigned short)25749;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
