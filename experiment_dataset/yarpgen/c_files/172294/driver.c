#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1837902026;
_Bool var_9 = (_Bool)0;
_Bool var_11 = (_Bool)1;
unsigned int var_14 = 2689674541U;
_Bool var_15 = (_Bool)1;
int var_16 = 433705885;
int zero = 0;
unsigned long long int var_17 = 17608048986326392069ULL;
unsigned long long int var_18 = 16824463324109100513ULL;
unsigned int var_19 = 576726648U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
