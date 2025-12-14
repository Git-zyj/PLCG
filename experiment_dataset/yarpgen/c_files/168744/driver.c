#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7589862700914495553ULL;
unsigned long long int var_3 = 2865442018498910291ULL;
int var_4 = 95907282;
int var_11 = -825110748;
unsigned short var_12 = (unsigned short)27777;
int zero = 0;
unsigned short var_17 = (unsigned short)21329;
signed char var_18 = (signed char)76;
unsigned long long int var_19 = 9806318088222529329ULL;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)39;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
