#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3153900357U;
int var_7 = 995705851;
long long int var_13 = 6717473620006405643LL;
int var_17 = 905483390;
unsigned int var_18 = 1492125038U;
int zero = 0;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)-21;
long long int var_21 = -7656474231791796604LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
