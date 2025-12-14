#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 393217365U;
unsigned char var_3 = (unsigned char)142;
short var_5 = (short)-26301;
int var_6 = -812500743;
unsigned short var_7 = (unsigned short)35343;
long long int var_8 = -7117217706141015865LL;
unsigned short var_9 = (unsigned short)20497;
unsigned long long int var_10 = 18148972504240861408ULL;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 9153467229947521462ULL;
long long int var_13 = -6920438049719614978LL;
void init() {
}

void checksum() {
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
