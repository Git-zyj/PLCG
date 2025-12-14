#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)6;
int var_8 = 334200381;
signed char var_9 = (signed char)-118;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 6557746747110708650ULL;
signed char var_22 = (signed char)0;
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
