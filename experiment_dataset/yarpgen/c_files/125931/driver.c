#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)6997;
unsigned short var_7 = (unsigned short)63899;
_Bool var_8 = (_Bool)0;
int zero = 0;
unsigned short var_19 = (unsigned short)42527;
unsigned short var_20 = (unsigned short)9437;
long long int var_21 = 2494748498575783700LL;
unsigned long long int var_22 = 10589649176247449378ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
