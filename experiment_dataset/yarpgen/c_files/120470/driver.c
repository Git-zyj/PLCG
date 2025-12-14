#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)16005;
long long int var_5 = -1765108929803541316LL;
short var_7 = (short)-21589;
unsigned long long int var_8 = 10150747482377289407ULL;
unsigned char var_10 = (unsigned char)163;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 6756146226038076751ULL;
unsigned int var_18 = 3698398666U;
int zero = 0;
_Bool var_20 = (_Bool)0;
short var_21 = (short)2300;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
