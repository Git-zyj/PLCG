#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_8 = (unsigned short)63465;
signed char var_11 = (signed char)109;
long long int var_13 = 5724609900007314187LL;
long long int var_15 = 7488522023292125683LL;
int zero = 0;
long long int var_17 = -4304988787029908148LL;
long long int var_18 = -230733485273328673LL;
unsigned long long int var_19 = 11591361804785178971ULL;
unsigned int var_20 = 2022985377U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
