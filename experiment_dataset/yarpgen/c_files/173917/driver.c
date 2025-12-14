#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3659013113781119447ULL;
unsigned char var_5 = (unsigned char)197;
_Bool var_6 = (_Bool)0;
int var_7 = -1291333605;
unsigned long long int var_9 = 6274626713430332316ULL;
long long int var_11 = -1775320019054893833LL;
int var_14 = 742308542;
int zero = 0;
short var_16 = (short)-25349;
short var_17 = (short)-11944;
int var_18 = 1903206252;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
