#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1265620075813482442LL;
_Bool var_14 = (_Bool)0;
int var_15 = 87460933;
int zero = 0;
unsigned long long int var_19 = 9900429475322180359ULL;
unsigned long long int var_20 = 15106310466437022334ULL;
signed char var_21 = (signed char)-59;
long long int var_22 = 6139579289141683861LL;
signed char var_23 = (signed char)-63;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
