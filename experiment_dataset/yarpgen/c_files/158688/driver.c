#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)20671;
_Bool var_3 = (_Bool)0;
int var_5 = 452495300;
unsigned long long int var_6 = 10944881198208682115ULL;
int var_8 = 871751738;
int zero = 0;
unsigned short var_10 = (unsigned short)28084;
unsigned int var_11 = 1454603236U;
unsigned short var_12 = (unsigned short)25012;
long long int var_13 = -1746373870190102988LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
