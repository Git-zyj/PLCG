#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-5;
unsigned short var_2 = (unsigned short)29906;
unsigned long long int var_3 = 4115855052629291592ULL;
signed char var_4 = (signed char)24;
signed char var_7 = (signed char)-22;
signed char var_8 = (signed char)107;
unsigned char var_9 = (unsigned char)49;
int var_10 = 415040209;
unsigned short var_12 = (unsigned short)5754;
signed char var_14 = (signed char)-116;
signed char var_17 = (signed char)-45;
unsigned long long int var_18 = 5678572299322257752ULL;
int zero = 0;
unsigned long long int var_19 = 4546575517897852585ULL;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)41130;
unsigned long long int var_22 = 9836553750874835800ULL;
void init() {
}

void checksum() {
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
