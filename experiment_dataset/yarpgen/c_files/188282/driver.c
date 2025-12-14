#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 6074833902470457610LL;
long long int var_3 = -5551899124372986443LL;
long long int var_4 = 5138113232602522504LL;
_Bool var_5 = (_Bool)0;
long long int var_12 = -7528511928178505980LL;
int zero = 0;
unsigned short var_18 = (unsigned short)45209;
unsigned long long int var_19 = 15599182341738083026ULL;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
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
