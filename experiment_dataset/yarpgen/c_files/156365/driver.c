#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-116;
unsigned long long int var_9 = 12554174482719732802ULL;
_Bool var_12 = (_Bool)1;
long long int var_13 = -4302928246018320280LL;
unsigned int var_17 = 4186580756U;
int zero = 0;
signed char var_20 = (signed char)-94;
unsigned int var_21 = 3803441216U;
long long int var_22 = 988907703027986165LL;
void init() {
}

void checksum() {
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
