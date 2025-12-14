#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10602671830261445700ULL;
long long int var_3 = 2303600864606134489LL;
signed char var_4 = (signed char)-85;
unsigned int var_5 = 3478548236U;
_Bool var_7 = (_Bool)1;
unsigned char var_8 = (unsigned char)144;
int zero = 0;
unsigned long long int var_10 = 2685610653884978874ULL;
unsigned short var_11 = (unsigned short)42375;
short var_12 = (short)3927;
unsigned short var_13 = (unsigned short)46536;
long long int var_14 = 7775762899821107105LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
