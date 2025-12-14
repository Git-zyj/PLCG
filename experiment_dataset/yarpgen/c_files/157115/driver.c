#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 2438248951737537627LL;
_Bool var_6 = (_Bool)0;
long long int var_13 = 5209710024359077913LL;
signed char var_14 = (signed char)-71;
long long int var_18 = -2085169195482544206LL;
int zero = 0;
long long int var_20 = 5159116829952653881LL;
long long int var_21 = 6722312364527819689LL;
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
