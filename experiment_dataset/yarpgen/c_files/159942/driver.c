#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-23206;
_Bool var_4 = (_Bool)0;
long long int var_5 = 6759996594684641147LL;
short var_7 = (short)-16513;
long long int var_9 = 1770845851738251500LL;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned char var_11 = (unsigned char)13;
signed char var_12 = (signed char)27;
_Bool var_13 = (_Bool)0;
long long int var_14 = -3811007907049110526LL;
unsigned long long int var_15 = 5890576836299094880ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
