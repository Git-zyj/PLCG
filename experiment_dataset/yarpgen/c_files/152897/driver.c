#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2018765142795470875LL;
unsigned long long int var_1 = 10237603845975374851ULL;
int var_2 = -1113783061;
_Bool var_5 = (_Bool)1;
long long int var_19 = -919925004460277809LL;
int zero = 0;
long long int var_20 = 69376875679134836LL;
unsigned short var_21 = (unsigned short)39614;
long long int var_22 = 4961387841578791944LL;
unsigned long long int var_23 = 17631328899965777700ULL;
_Bool var_24 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
