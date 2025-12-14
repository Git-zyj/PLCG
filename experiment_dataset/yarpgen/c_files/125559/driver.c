#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-52;
signed char var_1 = (signed char)-75;
signed char var_3 = (signed char)-111;
long long int var_4 = -7061822390150126956LL;
int zero = 0;
signed char var_16 = (signed char)-109;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 17363876435568575922ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
