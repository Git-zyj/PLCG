#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)23407;
signed char var_5 = (signed char)-77;
int var_11 = 969858255;
short var_13 = (short)9125;
unsigned long long int var_15 = 8855609010459795990ULL;
long long int var_17 = 5974923228569711893LL;
int zero = 0;
int var_18 = -1222606591;
unsigned short var_19 = (unsigned short)52138;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)56235;
void init() {
}

void checksum() {
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
