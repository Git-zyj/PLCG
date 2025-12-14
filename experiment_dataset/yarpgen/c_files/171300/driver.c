#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)26924;
short var_1 = (short)-20631;
unsigned long long int var_4 = 9556820729234847793ULL;
short var_5 = (short)-31686;
signed char var_11 = (signed char)44;
unsigned short var_12 = (unsigned short)49966;
int var_13 = 1254641375;
int zero = 0;
long long int var_20 = 4826177828202649952LL;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
