#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 2841532114452888950ULL;
unsigned char var_4 = (unsigned char)13;
unsigned short var_6 = (unsigned short)21781;
unsigned char var_7 = (unsigned char)218;
long long int var_8 = -325284091880401475LL;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned short var_13 = (unsigned short)18263;
signed char var_14 = (signed char)8;
long long int var_15 = -2154412232698975244LL;
unsigned int var_16 = 2446850262U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
