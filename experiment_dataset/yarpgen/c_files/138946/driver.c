#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned char var_2 = (unsigned char)99;
long long int var_5 = 7571464131111117938LL;
short var_6 = (short)20341;
short var_7 = (short)-14455;
signed char var_10 = (signed char)-45;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned long long int var_18 = 11592623986536838493ULL;
unsigned char var_19 = (unsigned char)217;
unsigned int var_20 = 2653807298U;
unsigned int var_21 = 1593114053U;
unsigned long long int var_22 = 7754112490493874868ULL;
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
