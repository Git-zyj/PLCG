#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -5489033399888518696LL;
signed char var_5 = (signed char)4;
unsigned char var_6 = (unsigned char)237;
unsigned char var_12 = (unsigned char)221;
unsigned long long int var_13 = 7680079854725188634ULL;
unsigned long long int var_15 = 12616257571985337294ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)15811;
unsigned int var_21 = 2162743361U;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
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
