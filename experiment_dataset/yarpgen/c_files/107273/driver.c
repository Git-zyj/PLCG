#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8404114375778787869LL;
_Bool var_2 = (_Bool)0;
long long int var_3 = 477998352720253954LL;
signed char var_4 = (signed char)107;
unsigned short var_5 = (unsigned short)64620;
unsigned short var_8 = (unsigned short)15710;
_Bool var_9 = (_Bool)0;
long long int var_11 = -4842269197851606099LL;
unsigned int var_12 = 1157333294U;
long long int var_13 = 2321427918851603253LL;
int zero = 0;
signed char var_14 = (signed char)-103;
signed char var_15 = (signed char)-73;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
