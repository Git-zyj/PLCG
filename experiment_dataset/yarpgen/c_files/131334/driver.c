#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)13232;
signed char var_3 = (signed char)114;
unsigned long long int var_4 = 14095176708761400367ULL;
long long int var_12 = 4016964344130059927LL;
int var_14 = -943213515;
short var_18 = (short)12784;
int zero = 0;
signed char var_20 = (signed char)-116;
unsigned short var_21 = (unsigned short)11346;
unsigned long long int var_22 = 8521106160000510583ULL;
_Bool var_23 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
