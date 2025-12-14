#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5197646128527472966ULL;
_Bool var_1 = (_Bool)0;
unsigned int var_5 = 2251384763U;
unsigned long long int var_6 = 15403663645258202964ULL;
unsigned char var_8 = (unsigned char)163;
_Bool var_10 = (_Bool)0;
unsigned long long int var_13 = 2957046599756937320ULL;
signed char var_17 = (signed char)43;
int zero = 0;
unsigned char var_19 = (unsigned char)97;
unsigned int var_20 = 2235208328U;
unsigned char var_21 = (unsigned char)143;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
