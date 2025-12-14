#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)37117;
unsigned long long int var_4 = 3128461701283630651ULL;
signed char var_6 = (signed char)26;
unsigned short var_7 = (unsigned short)15488;
long long int var_11 = -8891597992637312933LL;
unsigned long long int var_15 = 2175590656855861794ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)21292;
unsigned short var_18 = (unsigned short)36797;
void init() {
}

void checksum() {
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
