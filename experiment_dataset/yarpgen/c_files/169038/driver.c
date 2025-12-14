#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)62;
short var_1 = (short)26238;
unsigned char var_5 = (unsigned char)130;
unsigned char var_8 = (unsigned char)20;
int zero = 0;
unsigned char var_18 = (unsigned char)193;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)13463;
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
