#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)20643;
long long int var_12 = 7666705488015033569LL;
short var_13 = (short)-6219;
int zero = 0;
short var_19 = (short)-16953;
short var_20 = (short)28794;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 17741506820097131455ULL;
void init() {
}

void checksum() {
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
