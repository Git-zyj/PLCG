#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4120413082U;
long long int var_3 = 480032201390997835LL;
short var_6 = (short)-10949;
_Bool var_9 = (_Bool)1;
unsigned int var_10 = 1028367540U;
long long int var_11 = -4724118598152266916LL;
long long int var_12 = -8817683230383967083LL;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)12726;
unsigned long long int var_15 = 11401443434789766458ULL;
long long int var_16 = -3946408696154314882LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
