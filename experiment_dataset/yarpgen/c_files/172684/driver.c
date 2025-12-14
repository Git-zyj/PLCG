#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8178196067612254904ULL;
signed char var_3 = (signed char)-3;
_Bool var_4 = (_Bool)0;
unsigned long long int var_5 = 1008631583951028198ULL;
int zero = 0;
int var_17 = -1168623828;
unsigned long long int var_18 = 4916611193621450028ULL;
unsigned short var_19 = (unsigned short)59811;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
