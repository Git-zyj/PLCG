#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
unsigned long long int var_5 = 298786517309654935ULL;
int var_7 = -762685028;
signed char var_8 = (signed char)109;
long long int var_11 = 6624285463379210813LL;
long long int var_12 = 1632200369221634867LL;
int zero = 0;
unsigned long long int var_18 = 5150669643664710154ULL;
unsigned long long int var_19 = 10845134173854303227ULL;
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
