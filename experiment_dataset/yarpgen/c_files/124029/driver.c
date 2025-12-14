#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3120238431856966872ULL;
unsigned long long int var_1 = 15295197307847943707ULL;
signed char var_2 = (signed char)-74;
short var_4 = (short)4700;
short var_6 = (short)12437;
_Bool var_7 = (_Bool)0;
unsigned char var_11 = (unsigned char)194;
signed char var_13 = (signed char)9;
signed char var_14 = (signed char)103;
unsigned long long int var_16 = 5755282934783466814ULL;
int zero = 0;
unsigned int var_17 = 4222664918U;
short var_18 = (short)-21722;
unsigned int var_19 = 3335975720U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
