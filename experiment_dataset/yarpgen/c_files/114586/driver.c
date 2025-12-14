#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6000278012470224632LL;
_Bool var_3 = (_Bool)1;
long long int var_4 = -728029958442911829LL;
signed char var_5 = (signed char)-94;
unsigned long long int var_9 = 6611007201332450216ULL;
unsigned int var_10 = 1967783425U;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 4037272824U;
_Bool var_16 = (_Bool)1;
short var_17 = (short)23188;
int zero = 0;
unsigned char var_19 = (unsigned char)158;
unsigned long long int var_20 = 18143517483991368391ULL;
unsigned long long int var_21 = 5129521471922889860ULL;
unsigned char var_22 = (unsigned char)206;
signed char var_23 = (signed char)-108;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
