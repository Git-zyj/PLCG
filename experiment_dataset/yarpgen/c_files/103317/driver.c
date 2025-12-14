#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17831976237385981972ULL;
_Bool var_7 = (_Bool)0;
unsigned char var_12 = (unsigned char)151;
long long int var_14 = 3792846194164914074LL;
unsigned int var_16 = 3214073635U;
long long int var_19 = 8118994644812180530LL;
int zero = 0;
unsigned long long int var_20 = 1302242457167152675ULL;
long long int var_21 = 902586223127106110LL;
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
