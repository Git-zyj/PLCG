#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15283016012553962776ULL;
unsigned short var_2 = (unsigned short)20394;
signed char var_3 = (signed char)2;
unsigned int var_6 = 2293270781U;
short var_7 = (short)-16424;
short var_9 = (short)-15904;
int zero = 0;
unsigned long long int var_10 = 1519622238830338855ULL;
signed char var_11 = (signed char)-18;
unsigned short var_12 = (unsigned short)22158;
_Bool var_13 = (_Bool)1;
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
