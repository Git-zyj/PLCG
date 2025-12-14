#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17056481136341492469ULL;
unsigned short var_4 = (unsigned short)20422;
unsigned char var_9 = (unsigned char)225;
unsigned char var_10 = (unsigned char)122;
long long int var_11 = 3079109733320850554LL;
signed char var_12 = (signed char)-120;
signed char var_14 = (signed char)-34;
unsigned char var_15 = (unsigned char)124;
unsigned short var_16 = (unsigned short)15392;
int zero = 0;
unsigned long long int var_19 = 17925011639521885717ULL;
int var_20 = 1038399218;
unsigned int var_21 = 1458525654U;
_Bool var_22 = (_Bool)0;
long long int var_23 = 3789329774707734468LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
