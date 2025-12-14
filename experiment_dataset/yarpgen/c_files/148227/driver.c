#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)15748;
short var_5 = (short)24209;
short var_6 = (short)10330;
short var_7 = (short)-18228;
unsigned char var_8 = (unsigned char)217;
unsigned int var_9 = 4071611107U;
long long int var_11 = -764545900533286443LL;
long long int var_12 = -8903302987754108786LL;
unsigned char var_15 = (unsigned char)194;
short var_18 = (short)-5416;
int zero = 0;
unsigned long long int var_20 = 12581107441707744116ULL;
unsigned long long int var_21 = 4214816841805280667ULL;
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
