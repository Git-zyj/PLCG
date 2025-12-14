#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)3;
_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)1;
unsigned char var_7 = (unsigned char)57;
short var_9 = (short)27612;
_Bool var_11 = (_Bool)0;
short var_13 = (short)-27336;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)174;
int zero = 0;
unsigned char var_18 = (unsigned char)110;
unsigned char var_19 = (unsigned char)170;
unsigned char var_20 = (unsigned char)53;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
