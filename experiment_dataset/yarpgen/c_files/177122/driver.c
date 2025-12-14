#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)31;
_Bool var_12 = (_Bool)1;
signed char var_14 = (signed char)-116;
signed char var_15 = (signed char)-51;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned int var_19 = 4191604549U;
int var_20 = 370876810;
long long int var_21 = 3595592278472019460LL;
void init() {
}

void checksum() {
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
