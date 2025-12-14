#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6477316595327870119LL;
unsigned char var_2 = (unsigned char)193;
_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)-14;
_Bool var_7 = (_Bool)1;
int zero = 0;
unsigned short var_11 = (unsigned short)11874;
signed char var_12 = (signed char)60;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
