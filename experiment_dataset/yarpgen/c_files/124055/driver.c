#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)6409;
short var_2 = (short)-8080;
short var_3 = (short)26657;
unsigned char var_5 = (unsigned char)32;
short var_6 = (short)4557;
unsigned char var_9 = (unsigned char)86;
unsigned char var_11 = (unsigned char)156;
unsigned int var_14 = 3059424886U;
signed char var_15 = (signed char)-57;
int zero = 0;
signed char var_18 = (signed char)108;
unsigned long long int var_19 = 6366820426793150101ULL;
unsigned char var_20 = (unsigned char)56;
_Bool var_21 = (_Bool)0;
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
