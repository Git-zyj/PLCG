#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)7417;
unsigned long long int var_8 = 2597474417653164152ULL;
unsigned long long int var_9 = 2733513451707757028ULL;
long long int var_11 = 7996158999737491414LL;
short var_12 = (short)9828;
int var_16 = 1585956340;
int zero = 0;
_Bool var_18 = (_Bool)1;
int var_19 = -1804060568;
unsigned long long int var_20 = 10427941612221348510ULL;
long long int var_21 = 7624457828078920358LL;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
