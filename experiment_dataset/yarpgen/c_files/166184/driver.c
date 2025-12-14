#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-28227;
short var_2 = (short)25693;
short var_3 = (short)28131;
long long int var_4 = 8062742656462950943LL;
long long int var_5 = -1078236513895430202LL;
_Bool var_9 = (_Bool)0;
unsigned char var_10 = (unsigned char)103;
short var_11 = (short)18962;
int zero = 0;
unsigned short var_12 = (unsigned short)38280;
long long int var_13 = 8931510193504220111LL;
void init() {
}

void checksum() {
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
