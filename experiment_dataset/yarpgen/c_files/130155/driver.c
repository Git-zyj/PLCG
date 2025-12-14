#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)62;
unsigned int var_1 = 1955581863U;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 2656897103U;
unsigned int var_6 = 3158118302U;
unsigned short var_7 = (unsigned short)49031;
short var_8 = (short)17551;
signed char var_9 = (signed char)-106;
signed char var_12 = (signed char)59;
signed char var_15 = (signed char)-119;
signed char var_17 = (signed char)111;
unsigned long long int var_19 = 13582359320664411815ULL;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)12344;
unsigned long long int var_22 = 11043902353792474024ULL;
short var_23 = (short)-27672;
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
