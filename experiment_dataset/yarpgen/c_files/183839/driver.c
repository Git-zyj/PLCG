#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3075597693568688240LL;
unsigned int var_1 = 2339172952U;
_Bool var_3 = (_Bool)1;
int var_9 = 648576484;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned short var_16 = (unsigned short)15446;
unsigned short var_17 = (unsigned short)50637;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)29860;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
