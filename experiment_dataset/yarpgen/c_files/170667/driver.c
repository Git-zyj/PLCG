#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)11;
signed char var_2 = (signed char)117;
int var_4 = -1423073979;
unsigned int var_5 = 3113156185U;
signed char var_7 = (signed char)-26;
signed char var_8 = (signed char)-34;
int var_17 = 1874943346;
int zero = 0;
unsigned long long int var_18 = 12596803524165805153ULL;
unsigned long long int var_19 = 917845138038526579ULL;
int var_20 = -163338964;
signed char var_21 = (signed char)83;
short var_22 = (short)16300;
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
