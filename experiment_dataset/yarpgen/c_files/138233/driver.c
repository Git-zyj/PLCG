#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6068983431038205861LL;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)1;
unsigned int var_10 = 630346583U;
_Bool var_16 = (_Bool)1;
int zero = 0;
signed char var_18 = (signed char)-35;
int var_19 = -1341236606;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
