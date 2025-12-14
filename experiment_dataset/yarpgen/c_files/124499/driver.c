#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-78;
signed char var_3 = (signed char)63;
short var_4 = (short)28518;
signed char var_9 = (signed char)-25;
int var_17 = -228480888;
_Bool var_18 = (_Bool)0;
int zero = 0;
signed char var_19 = (signed char)-71;
unsigned short var_20 = (unsigned short)38525;
void init() {
}

void checksum() {
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
