#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)78;
signed char var_4 = (signed char)-47;
unsigned int var_5 = 644811999U;
long long int var_7 = 8830472855827167164LL;
unsigned char var_9 = (unsigned char)143;
int zero = 0;
unsigned long long int var_12 = 12532277360197145816ULL;
long long int var_13 = 717367114952782672LL;
unsigned char var_14 = (unsigned char)185;
long long int var_15 = 4993837612656426138LL;
void init() {
}

void checksum() {
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
