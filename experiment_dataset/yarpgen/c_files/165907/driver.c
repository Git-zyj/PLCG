#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)31079;
_Bool var_2 = (_Bool)1;
unsigned long long int var_3 = 10615233892763014742ULL;
unsigned char var_5 = (unsigned char)85;
short var_6 = (short)20604;
unsigned long long int var_7 = 6642755039071171904ULL;
unsigned long long int var_8 = 1042999716046159261ULL;
signed char var_9 = (signed char)-53;
signed char var_10 = (signed char)(-127 - 1);
int zero = 0;
long long int var_12 = 7256765405324141486LL;
unsigned char var_13 = (unsigned char)30;
unsigned int var_14 = 906242323U;
unsigned long long int var_15 = 5944780932240405118ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
