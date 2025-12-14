#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5112386840893288700LL;
unsigned long long int var_2 = 15418232588843799288ULL;
unsigned long long int var_3 = 13711810996417116804ULL;
_Bool var_4 = (_Bool)0;
int var_5 = -306919562;
unsigned long long int var_10 = 17553608428701462668ULL;
int zero = 0;
short var_13 = (short)-26;
unsigned short var_14 = (unsigned short)5297;
signed char var_15 = (signed char)-28;
void init() {
}

void checksum() {
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
