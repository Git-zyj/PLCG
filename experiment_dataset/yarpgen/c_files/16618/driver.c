#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)32003;
signed char var_1 = (signed char)-19;
signed char var_2 = (signed char)71;
unsigned short var_7 = (unsigned short)993;
unsigned long long int var_8 = 2683215086553928731ULL;
int var_10 = 720464158;
unsigned short var_11 = (unsigned short)26435;
unsigned char var_13 = (unsigned char)60;
long long int var_17 = 3910551690114252864LL;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 1694941151U;
_Bool var_22 = (_Bool)0;
signed char var_23 = (signed char)-26;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
