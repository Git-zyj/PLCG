#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 473548222030608990LL;
short var_1 = (short)-4353;
long long int var_3 = -5932080253180850192LL;
_Bool var_8 = (_Bool)1;
long long int var_9 = 3974758120249073650LL;
unsigned int var_13 = 3376490998U;
int zero = 0;
int var_14 = 499162463;
short var_15 = (short)27656;
short var_16 = (short)8800;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
