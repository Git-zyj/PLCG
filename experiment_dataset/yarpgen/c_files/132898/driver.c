#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_8 = (signed char)-31;
_Bool var_14 = (_Bool)0;
long long int var_15 = -4854345660268194275LL;
int zero = 0;
int var_18 = 1249629180;
long long int var_19 = -5544474576887870624LL;
int var_20 = -1909572838;
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
