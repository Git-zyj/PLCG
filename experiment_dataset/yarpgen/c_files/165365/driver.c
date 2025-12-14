#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = 183595512;
_Bool var_9 = (_Bool)0;
int var_17 = 1250399256;
int zero = 0;
signed char var_20 = (signed char)-118;
_Bool var_21 = (_Bool)0;
signed char var_22 = (signed char)-79;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
