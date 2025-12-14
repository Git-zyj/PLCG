#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)40203;
unsigned long long int var_3 = 9817620196170558727ULL;
unsigned short var_5 = (unsigned short)32477;
long long int var_9 = 9054897987075727379LL;
int zero = 0;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)23;
short var_13 = (short)8304;
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
