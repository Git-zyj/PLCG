#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
_Bool var_4 = (_Bool)0;
int var_7 = 985481540;
int var_8 = 1979108470;
_Bool var_10 = (_Bool)1;
int zero = 0;
short var_18 = (short)-31377;
long long int var_19 = 8523308256010506824LL;
unsigned char var_20 = (unsigned char)235;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
