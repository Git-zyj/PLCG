#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)234;
int var_6 = 198735071;
unsigned short var_7 = (unsigned short)6891;
unsigned long long int var_13 = 17359127777877203739ULL;
int var_15 = -694173385;
int var_16 = -261400322;
int zero = 0;
short var_17 = (short)7487;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)0;
long long int var_21 = 6453928536336140226LL;
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
