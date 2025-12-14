#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 10152828317167370616ULL;
unsigned long long int var_4 = 16798135228878617103ULL;
_Bool var_11 = (_Bool)0;
unsigned int var_13 = 3886423985U;
int zero = 0;
int var_19 = -1120431209;
long long int var_20 = 2313465860424940595LL;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
