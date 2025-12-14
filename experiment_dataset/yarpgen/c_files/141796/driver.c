#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7490931117512501125ULL;
_Bool var_1 = (_Bool)0;
unsigned char var_2 = (unsigned char)69;
unsigned char var_3 = (unsigned char)231;
unsigned char var_5 = (unsigned char)247;
unsigned char var_6 = (unsigned char)246;
unsigned char var_7 = (unsigned char)72;
unsigned long long int var_8 = 10770796111557337766ULL;
unsigned long long int var_10 = 11220538202894215562ULL;
int zero = 0;
long long int var_12 = 626816250802522746LL;
signed char var_13 = (signed char)-94;
void init() {
}

void checksum() {
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
