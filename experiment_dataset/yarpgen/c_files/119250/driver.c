#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
short var_3 = (short)4079;
unsigned long long int var_4 = 4836960959627047340ULL;
unsigned short var_7 = (unsigned short)54920;
unsigned int var_8 = 165182702U;
signed char var_9 = (signed char)77;
unsigned char var_10 = (unsigned char)145;
unsigned char var_11 = (unsigned char)147;
int zero = 0;
unsigned long long int var_12 = 15092112406188279592ULL;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
