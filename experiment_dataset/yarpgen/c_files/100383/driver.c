#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6628225394772693106LL;
int var_1 = -2101220148;
unsigned int var_2 = 2082037575U;
int var_3 = 1774875818;
unsigned short var_5 = (unsigned short)20362;
unsigned short var_6 = (unsigned short)35444;
unsigned long long int var_7 = 16670658816128834081ULL;
_Bool var_8 = (_Bool)0;
int var_9 = 746354474;
int zero = 0;
unsigned char var_11 = (unsigned char)72;
unsigned long long int var_12 = 270059402489910624ULL;
unsigned long long int var_13 = 7380109206417828214ULL;
unsigned short var_14 = (unsigned short)43858;
short var_15 = (short)-28593;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
