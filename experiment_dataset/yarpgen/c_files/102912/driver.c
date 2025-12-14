#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-107;
unsigned long long int var_2 = 9178499654101494195ULL;
unsigned int var_3 = 1088438509U;
unsigned char var_6 = (unsigned char)196;
unsigned int var_9 = 2064819304U;
short var_13 = (short)-26684;
int var_15 = 1746432436;
short var_18 = (short)30559;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)100;
signed char var_22 = (signed char)31;
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
