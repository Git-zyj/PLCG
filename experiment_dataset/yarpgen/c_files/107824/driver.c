#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 7663278782553985107ULL;
short var_7 = (short)16711;
_Bool var_9 = (_Bool)0;
unsigned int var_15 = 2269615091U;
signed char var_16 = (signed char)111;
int zero = 0;
unsigned short var_19 = (unsigned short)52226;
unsigned short var_20 = (unsigned short)52839;
unsigned long long int var_21 = 15556932920746502515ULL;
void init() {
}

void checksum() {
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
