#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 9270574094387106195ULL;
signed char var_3 = (signed char)-34;
unsigned char var_5 = (unsigned char)2;
long long int var_6 = 6009291410267705635LL;
int var_11 = 1707447372;
unsigned int var_13 = 1940991301U;
long long int var_18 = 4421138940820896633LL;
int zero = 0;
unsigned short var_19 = (unsigned short)47810;
unsigned char var_20 = (unsigned char)140;
short var_21 = (short)28714;
void init() {
}

void checksum() {
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
