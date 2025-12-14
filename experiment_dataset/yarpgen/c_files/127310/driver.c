#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)75;
long long int var_1 = 5468791837145968795LL;
unsigned long long int var_2 = 2623801097746268094ULL;
unsigned long long int var_3 = 15483589234197788447ULL;
_Bool var_5 = (_Bool)0;
unsigned char var_9 = (unsigned char)64;
int var_12 = 1859869304;
short var_13 = (short)27087;
unsigned int var_16 = 2359490371U;
unsigned int var_18 = 3860467161U;
int zero = 0;
signed char var_20 = (signed char)62;
unsigned short var_21 = (unsigned short)700;
_Bool var_22 = (_Bool)0;
unsigned short var_23 = (unsigned short)34439;
int var_24 = 540143410;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
