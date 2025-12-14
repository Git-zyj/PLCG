#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 402033458U;
_Bool var_1 = (_Bool)0;
unsigned int var_4 = 3713178025U;
signed char var_6 = (signed char)-84;
int zero = 0;
int var_10 = -931865714;
long long int var_11 = -2890809626830727527LL;
int var_12 = -160310199;
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
