#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3709479308U;
unsigned long long int var_7 = 12483920653635531888ULL;
long long int var_12 = 1309720468307152667LL;
unsigned char var_16 = (unsigned char)118;
int zero = 0;
unsigned int var_19 = 3167730256U;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 10756189656903768248ULL;
short var_22 = (short)25187;
unsigned int var_23 = 1674605131U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
