#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3899596399U;
unsigned int var_3 = 3440877421U;
long long int var_8 = -5884184270297128067LL;
_Bool var_10 = (_Bool)0;
unsigned long long int var_16 = 14015708111870216588ULL;
_Bool var_17 = (_Bool)0;
int zero = 0;
long long int var_18 = 4418272451121642808LL;
unsigned long long int var_19 = 14489570661040714614ULL;
unsigned short var_20 = (unsigned short)8274;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
