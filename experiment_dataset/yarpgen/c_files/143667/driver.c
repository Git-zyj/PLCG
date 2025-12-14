#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17522836943547049375ULL;
_Bool var_3 = (_Bool)1;
signed char var_4 = (signed char)-44;
unsigned int var_9 = 1212037270U;
_Bool var_15 = (_Bool)1;
int zero = 0;
signed char var_17 = (signed char)82;
int var_18 = -598259419;
void init() {
}

void checksum() {
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
