#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned char var_7 = (unsigned char)0;
unsigned long long int var_12 = 8075681353417182633ULL;
signed char var_15 = (signed char)127;
long long int var_16 = -6052159662566759151LL;
int zero = 0;
unsigned long long int var_18 = 17444168801020335024ULL;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)5;
unsigned long long int var_21 = 5844325600588493622ULL;
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
