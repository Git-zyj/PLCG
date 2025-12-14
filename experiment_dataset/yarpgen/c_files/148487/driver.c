#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_1 = (signed char)-73;
unsigned char var_4 = (unsigned char)155;
unsigned char var_6 = (unsigned char)78;
unsigned int var_8 = 4117519015U;
unsigned char var_9 = (unsigned char)27;
int zero = 0;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)31;
signed char var_12 = (signed char)-89;
long long int var_13 = 8954550721564425668LL;
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
