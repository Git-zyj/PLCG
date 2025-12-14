#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 4503612978943003160ULL;
_Bool var_11 = (_Bool)0;
unsigned short var_14 = (unsigned short)49482;
int zero = 0;
unsigned short var_17 = (unsigned short)32400;
unsigned char var_18 = (unsigned char)124;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
