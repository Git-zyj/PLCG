#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 944665883613508759LL;
unsigned int var_5 = 3516287211U;
long long int var_8 = -7902318691470225505LL;
int var_11 = -1573838024;
unsigned char var_14 = (unsigned char)211;
unsigned char var_18 = (unsigned char)151;
int zero = 0;
signed char var_19 = (signed char)-2;
unsigned char var_20 = (unsigned char)191;
signed char var_21 = (signed char)83;
unsigned char var_22 = (unsigned char)141;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
