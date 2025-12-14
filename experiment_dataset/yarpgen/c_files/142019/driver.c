#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)37606;
int var_4 = 52442447;
long long int var_6 = 6987834469000105206LL;
long long int var_8 = 4398572651890561728LL;
short var_11 = (short)32644;
int zero = 0;
short var_13 = (short)748;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)44938;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
