#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-73;
short var_4 = (short)18340;
unsigned long long int var_7 = 15588900619242358425ULL;
_Bool var_8 = (_Bool)1;
int zero = 0;
unsigned short var_18 = (unsigned short)56247;
int var_19 = -1402725416;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
