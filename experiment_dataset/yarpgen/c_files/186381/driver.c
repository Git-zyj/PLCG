#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1364419146;
int var_3 = 1940216028;
long long int var_7 = 1653153811873124576LL;
_Bool var_12 = (_Bool)1;
_Bool var_15 = (_Bool)1;
signed char var_19 = (signed char)-29;
int zero = 0;
long long int var_20 = 4441387265502135652LL;
short var_21 = (short)20646;
long long int var_22 = -3676142611983806173LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
