#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 3572882478285907177LL;
int var_9 = -551997650;
int var_11 = 1544878517;
int zero = 0;
signed char var_13 = (signed char)82;
long long int var_14 = 7201990913180129687LL;
long long int var_15 = 2548582484033299198LL;
int var_16 = 1729263015;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
