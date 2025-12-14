#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)11368;
unsigned long long int var_4 = 6973818480900992369ULL;
unsigned char var_7 = (unsigned char)231;
_Bool var_10 = (_Bool)0;
long long int var_17 = -4481509918333940555LL;
unsigned long long int var_18 = 250474174174843939ULL;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)123;
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
