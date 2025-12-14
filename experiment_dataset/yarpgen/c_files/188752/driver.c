#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2496153880U;
_Bool var_6 = (_Bool)0;
short var_7 = (short)-11562;
signed char var_8 = (signed char)-80;
unsigned int var_10 = 3137666903U;
int zero = 0;
unsigned int var_11 = 1046595029U;
unsigned int var_12 = 3222693184U;
short var_13 = (short)-19217;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
