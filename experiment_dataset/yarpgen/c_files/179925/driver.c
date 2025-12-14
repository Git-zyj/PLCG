#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 426856349U;
long long int var_2 = -868229813641429687LL;
unsigned int var_3 = 3610435979U;
signed char var_8 = (signed char)113;
unsigned long long int var_9 = 13492923787054682333ULL;
unsigned long long int var_10 = 5637276949252787580ULL;
int zero = 0;
int var_18 = 1109825;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
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
