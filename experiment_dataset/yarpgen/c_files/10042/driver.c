#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)197;
unsigned long long int var_1 = 4873905098237466742ULL;
unsigned long long int var_4 = 1705173219263080041ULL;
unsigned long long int var_5 = 4264803547775256353ULL;
signed char var_7 = (signed char)104;
_Bool var_11 = (_Bool)0;
short var_14 = (short)2360;
int zero = 0;
int var_20 = 1266884353;
int var_21 = 282733520;
unsigned short var_22 = (unsigned short)25222;
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
