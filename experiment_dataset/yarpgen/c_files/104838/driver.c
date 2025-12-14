#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2878319101U;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 3023164901620351307ULL;
unsigned char var_9 = (unsigned char)206;
signed char var_12 = (signed char)-58;
long long int var_16 = 9153715991771538476LL;
int zero = 0;
unsigned int var_19 = 3870283490U;
unsigned int var_20 = 1012317904U;
unsigned int var_21 = 1838876965U;
long long int var_22 = -1780021429587449919LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
