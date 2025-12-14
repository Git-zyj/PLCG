#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-93;
unsigned int var_6 = 3218208816U;
unsigned int var_8 = 4025308257U;
unsigned int var_9 = 3837998037U;
long long int var_14 = -2377592060207614151LL;
long long int var_16 = 4676322710145948976LL;
int zero = 0;
int var_17 = 1144759310;
long long int var_18 = -5680221899240560736LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
