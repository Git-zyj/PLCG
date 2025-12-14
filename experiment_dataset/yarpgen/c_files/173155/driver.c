#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned int var_4 = 2343374646U;
long long int var_7 = 685061971766367545LL;
_Bool var_19 = (_Bool)0;
int zero = 0;
long long int var_20 = 5276684219778052154LL;
unsigned int var_21 = 4061031406U;
unsigned char var_22 = (unsigned char)37;
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
