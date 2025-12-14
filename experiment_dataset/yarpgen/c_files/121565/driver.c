#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)39085;
unsigned long long int var_1 = 16427961075736964128ULL;
unsigned long long int var_2 = 10145701709983902449ULL;
unsigned char var_3 = (unsigned char)55;
unsigned long long int var_5 = 2343985299812485274ULL;
int var_7 = -2037479255;
_Bool var_8 = (_Bool)0;
signed char var_9 = (signed char)8;
int zero = 0;
unsigned short var_10 = (unsigned short)50187;
unsigned short var_11 = (unsigned short)22882;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
