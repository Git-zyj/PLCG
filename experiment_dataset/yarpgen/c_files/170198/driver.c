#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13350045666969763150ULL;
unsigned int var_3 = 194414172U;
signed char var_11 = (signed char)-44;
int var_12 = -981531854;
int zero = 0;
short var_13 = (short)2077;
short var_14 = (short)19827;
int var_15 = -631466567;
short var_16 = (short)18732;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
