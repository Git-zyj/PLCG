#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned long long int var_3 = 11754302502510932484ULL;
_Bool var_4 = (_Bool)1;
unsigned long long int var_9 = 17113927835851975357ULL;
int zero = 0;
_Bool var_17 = (_Bool)0;
int var_18 = 1469072813;
int var_19 = 385785401;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
