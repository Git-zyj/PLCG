#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3910704890U;
long long int var_5 = 2120869340984425774LL;
int var_7 = -1675722932;
unsigned char var_11 = (unsigned char)25;
int var_17 = 1495161197;
int zero = 0;
_Bool var_20 = (_Bool)0;
int var_21 = 247530345;
void init() {
}

void checksum() {
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
