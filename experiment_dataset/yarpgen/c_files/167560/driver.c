#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -551353244;
int var_4 = 1584586098;
unsigned int var_5 = 2736469012U;
int var_8 = 560107160;
int var_14 = 1837404557;
long long int var_15 = 2109129190397054052LL;
_Bool var_16 = (_Bool)1;
int zero = 0;
long long int var_19 = -6524053625477524591LL;
long long int var_20 = 676759138182692116LL;
int var_21 = -649282468;
unsigned int var_22 = 331730907U;
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
