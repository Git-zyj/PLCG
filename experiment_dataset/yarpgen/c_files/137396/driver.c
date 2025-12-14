#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 2028419704;
int var_2 = -446591906;
unsigned long long int var_5 = 11603986317800663199ULL;
unsigned short var_8 = (unsigned short)40182;
unsigned char var_16 = (unsigned char)219;
int zero = 0;
_Bool var_20 = (_Bool)1;
int var_21 = -881185164;
void init() {
}

void checksum() {
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
