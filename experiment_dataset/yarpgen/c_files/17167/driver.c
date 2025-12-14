#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-113;
unsigned short var_2 = (unsigned short)8569;
short var_4 = (short)-2122;
unsigned int var_6 = 3888759177U;
unsigned char var_7 = (unsigned char)203;
_Bool var_9 = (_Bool)0;
unsigned long long int var_12 = 9642621028801863632ULL;
unsigned long long int var_13 = 16299408236280049350ULL;
int zero = 0;
short var_17 = (short)8535;
int var_18 = 1959692886;
long long int var_19 = 3374068656528809461LL;
unsigned char var_20 = (unsigned char)34;
long long int var_21 = 9194992250114162522LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
