#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1645398581U;
_Bool var_3 = (_Bool)0;
long long int var_4 = 8199097901040048770LL;
_Bool var_6 = (_Bool)0;
_Bool var_9 = (_Bool)1;
long long int var_15 = -7468020436857498536LL;
long long int var_17 = -4455157480618818938LL;
int zero = 0;
signed char var_18 = (signed char)-119;
unsigned short var_19 = (unsigned short)28996;
void init() {
}

void checksum() {
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
