#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)14;
unsigned long long int var_4 = 13397167873853737352ULL;
unsigned long long int var_16 = 14619668692905624485ULL;
int zero = 0;
int var_19 = -312931725;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 12627996720571731914ULL;
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
