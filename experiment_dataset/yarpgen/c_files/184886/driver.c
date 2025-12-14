#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)37429;
unsigned long long int var_1 = 6617106080096333833ULL;
unsigned char var_2 = (unsigned char)214;
int var_3 = -676061426;
unsigned long long int var_4 = 512034056123347903ULL;
unsigned short var_5 = (unsigned short)6118;
unsigned short var_6 = (unsigned short)57871;
unsigned long long int var_7 = 6956177025936525848ULL;
long long int var_8 = -3253065126706756979LL;
unsigned short var_9 = (unsigned short)1864;
signed char var_10 = (signed char)16;
int zero = 0;
unsigned int var_11 = 4009260090U;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)15;
void init() {
}

void checksum() {
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
