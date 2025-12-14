#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -6351155396465912679LL;
unsigned int var_6 = 3361480590U;
long long int var_7 = 4080059911364985008LL;
long long int var_9 = 1122090084559216744LL;
_Bool var_10 = (_Bool)1;
int zero = 0;
signed char var_15 = (signed char)-11;
unsigned int var_16 = 2231949747U;
void init() {
}

void checksum() {
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
