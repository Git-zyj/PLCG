#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)10322;
short var_6 = (short)18715;
signed char var_11 = (signed char)105;
unsigned long long int var_15 = 5452224887184521175ULL;
unsigned char var_17 = (unsigned char)54;
int zero = 0;
short var_18 = (short)21576;
unsigned short var_19 = (unsigned short)14502;
_Bool var_20 = (_Bool)1;
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
