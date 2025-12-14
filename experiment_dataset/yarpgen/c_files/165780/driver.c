#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1530654552U;
long long int var_3 = 1432913773653934340LL;
unsigned int var_4 = 1154838439U;
unsigned char var_6 = (unsigned char)36;
unsigned char var_8 = (unsigned char)79;
unsigned short var_9 = (unsigned short)604;
int zero = 0;
unsigned short var_11 = (unsigned short)12528;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
