#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14173548471123085991ULL;
short var_2 = (short)-1063;
signed char var_3 = (signed char)15;
short var_9 = (short)-14599;
unsigned long long int var_10 = 15376503867934301984ULL;
unsigned long long int var_16 = 8465834857688617489ULL;
unsigned char var_18 = (unsigned char)22;
int zero = 0;
short var_20 = (short)-14295;
long long int var_21 = 7461029504227442848LL;
_Bool var_22 = (_Bool)1;
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
