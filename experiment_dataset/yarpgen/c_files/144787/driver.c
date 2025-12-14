#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3884992089552076357ULL;
signed char var_1 = (signed char)91;
long long int var_2 = -7027849121416257883LL;
long long int var_3 = 12139495491419903LL;
long long int var_6 = -7649089329747809272LL;
long long int var_7 = 609257019170430397LL;
int var_8 = -570463427;
int zero = 0;
signed char var_11 = (signed char)125;
long long int var_12 = -4315907091664469068LL;
unsigned int var_13 = 2617734524U;
signed char var_14 = (signed char)-115;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
