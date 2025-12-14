#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)33547;
unsigned long long int var_2 = 9262674853254582562ULL;
long long int var_3 = 205818999313322732LL;
unsigned short var_4 = (unsigned short)20744;
unsigned long long int var_6 = 13645129087396998765ULL;
int var_9 = 1741479700;
int zero = 0;
short var_10 = (short)-31220;
unsigned long long int var_11 = 12393851180706663651ULL;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
