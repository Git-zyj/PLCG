#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 713151687;
_Bool var_6 = (_Bool)1;
long long int var_7 = 8478350865650932139LL;
_Bool var_12 = (_Bool)1;
int zero = 0;
_Bool var_19 = (_Bool)1;
long long int var_20 = 6283562984257048111LL;
int var_21 = -1008147209;
unsigned short var_22 = (unsigned short)1244;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
