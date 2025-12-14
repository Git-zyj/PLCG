#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -509912230030908157LL;
int var_10 = -243316873;
long long int var_11 = -4359123798630577602LL;
int zero = 0;
unsigned short var_12 = (unsigned short)36436;
long long int var_13 = 751489926896328674LL;
signed char var_14 = (signed char)68;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
