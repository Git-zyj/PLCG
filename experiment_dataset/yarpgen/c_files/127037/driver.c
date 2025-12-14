#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 8330988235180694988LL;
short var_3 = (short)29872;
long long int var_4 = -6202262642974510763LL;
unsigned long long int var_8 = 1489708354054439267ULL;
int zero = 0;
unsigned long long int var_10 = 17814487151090152649ULL;
int var_11 = -362913434;
_Bool var_12 = (_Bool)1;
long long int var_13 = -8426141807124867113LL;
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
