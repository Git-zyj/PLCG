#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_1 = 2716782122393352750LL;
unsigned char var_2 = (unsigned char)250;
_Bool var_3 = (_Bool)0;
int var_4 = 1571143517;
unsigned int var_5 = 4006916487U;
signed char var_6 = (signed char)-39;
unsigned char var_7 = (unsigned char)77;
int var_8 = 1898124740;
long long int var_9 = -5939541489924050399LL;
unsigned int var_10 = 1012030708U;
int zero = 0;
unsigned short var_11 = (unsigned short)8233;
unsigned long long int var_12 = 18242443593107801537ULL;
_Bool var_13 = (_Bool)0;
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
