#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2891377433U;
unsigned int var_2 = 2384641665U;
long long int var_6 = 4578989955747041453LL;
unsigned int var_7 = 971802139U;
_Bool var_9 = (_Bool)0;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 3297982031U;
long long int var_15 = 4471691130243230365LL;
_Bool var_18 = (_Bool)0;
int zero = 0;
long long int var_19 = -1062411007776324749LL;
unsigned int var_20 = 3366655782U;
long long int var_21 = -5412163804376740569LL;
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
