#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6500109792105794285LL;
long long int var_1 = -3689173418183271682LL;
unsigned long long int var_3 = 9379768777720683834ULL;
long long int var_4 = 7193090228933872926LL;
short var_5 = (short)18336;
long long int var_6 = 2529452057316869823LL;
_Bool var_14 = (_Bool)0;
unsigned char var_16 = (unsigned char)169;
int zero = 0;
long long int var_18 = -62987853402235814LL;
long long int var_19 = -6859545776630564456LL;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)148;
int var_22 = 1299537802;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
