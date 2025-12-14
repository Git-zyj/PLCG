#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -778248118;
unsigned int var_2 = 534945283U;
unsigned char var_6 = (unsigned char)177;
unsigned short var_8 = (unsigned short)45120;
signed char var_13 = (signed char)-45;
int zero = 0;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)-112;
long long int var_19 = -1053245132754871872LL;
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
