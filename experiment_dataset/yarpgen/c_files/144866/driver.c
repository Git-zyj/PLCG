#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5981873970210117112LL;
_Bool var_2 = (_Bool)0;
unsigned long long int var_5 = 3535403076862924207ULL;
unsigned short var_7 = (unsigned short)24153;
unsigned int var_10 = 2442285097U;
int zero = 0;
unsigned char var_11 = (unsigned char)136;
int var_12 = -776809360;
void init() {
}

void checksum() {
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
