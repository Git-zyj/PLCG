#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)3;
unsigned int var_9 = 4271317437U;
unsigned int var_13 = 3866348593U;
int zero = 0;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)-41;
long long int var_20 = -3583978878209501542LL;
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
