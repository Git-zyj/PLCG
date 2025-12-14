#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)63;
_Bool var_6 = (_Bool)1;
unsigned int var_8 = 1961573170U;
int zero = 0;
signed char var_10 = (signed char)-118;
long long int var_11 = 4573468566373935398LL;
unsigned int var_12 = 4001876192U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
