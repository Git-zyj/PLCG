#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)4051;
unsigned long long int var_7 = 11949915732343735443ULL;
signed char var_10 = (signed char)-80;
long long int var_12 = -3333796589136046446LL;
long long int var_13 = -7785219087753697971LL;
unsigned long long int var_15 = 12649675953633688303ULL;
int zero = 0;
signed char var_16 = (signed char)68;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)39;
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
