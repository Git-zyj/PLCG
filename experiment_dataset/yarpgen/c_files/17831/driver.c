#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2006276033U;
long long int var_3 = -620491969367902527LL;
unsigned long long int var_7 = 8169888385131497271ULL;
unsigned long long int var_10 = 17890960543471286394ULL;
unsigned short var_11 = (unsigned short)27095;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 12885360763994803952ULL;
unsigned long long int var_18 = 17944323213069273450ULL;
signed char var_19 = (signed char)-40;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
