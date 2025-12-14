#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -575455736;
_Bool var_3 = (_Bool)1;
unsigned char var_6 = (unsigned char)172;
unsigned int var_8 = 2981969577U;
unsigned char var_9 = (unsigned char)33;
unsigned char var_12 = (unsigned char)104;
long long int var_13 = 3578324987692379146LL;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)33639;
long long int var_22 = 2672472720287492461LL;
unsigned int var_23 = 2600953030U;
void init() {
}

void checksum() {
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
