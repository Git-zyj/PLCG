#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -5228913215551064797LL;
long long int var_3 = 373389646462650642LL;
unsigned short var_4 = (unsigned short)5671;
unsigned short var_5 = (unsigned short)26263;
unsigned char var_6 = (unsigned char)42;
short var_7 = (short)17527;
unsigned int var_8 = 2327270215U;
long long int var_9 = -2901701505093285963LL;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 5267012612479316771ULL;
int zero = 0;
unsigned long long int var_12 = 11282798759957616157ULL;
unsigned long long int var_13 = 6075012962868387504ULL;
unsigned short var_14 = (unsigned short)15365;
unsigned long long int var_15 = 4778058004223265568ULL;
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
