#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-43;
unsigned long long int var_3 = 11737604371953747044ULL;
signed char var_15 = (signed char)-35;
int zero = 0;
signed char var_18 = (signed char)-52;
unsigned int var_19 = 200530708U;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)107;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
