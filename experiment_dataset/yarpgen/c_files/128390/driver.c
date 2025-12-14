#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_2 = (short)-18139;
long long int var_3 = -8961173460743615416LL;
_Bool var_8 = (_Bool)0;
short var_9 = (short)28004;
short var_10 = (short)21735;
long long int var_19 = 3579725511914203903LL;
int zero = 0;
unsigned int var_20 = 2997742013U;
unsigned short var_21 = (unsigned short)3689;
unsigned short var_22 = (unsigned short)9800;
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
