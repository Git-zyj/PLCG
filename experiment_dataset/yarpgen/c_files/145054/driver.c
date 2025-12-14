#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)151;
unsigned short var_5 = (unsigned short)9586;
unsigned char var_7 = (unsigned char)30;
unsigned char var_8 = (unsigned char)195;
_Bool var_9 = (_Bool)1;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 6776130265592591043ULL;
unsigned int var_12 = 3810910002U;
unsigned char var_13 = (unsigned char)132;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
