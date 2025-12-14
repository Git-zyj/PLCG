#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-27158;
unsigned long long int var_3 = 3759610996509807704ULL;
unsigned long long int var_4 = 9622387465837731165ULL;
unsigned long long int var_7 = 4368229164838675776ULL;
signed char var_11 = (signed char)-83;
unsigned char var_13 = (unsigned char)169;
unsigned short var_14 = (unsigned short)13948;
signed char var_18 = (signed char)-24;
int zero = 0;
_Bool var_20 = (_Bool)1;
short var_21 = (short)-3646;
unsigned long long int var_22 = 17389114374985484060ULL;
unsigned char var_23 = (unsigned char)144;
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
