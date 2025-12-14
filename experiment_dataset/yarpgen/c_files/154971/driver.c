#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)125;
unsigned short var_3 = (unsigned short)59366;
_Bool var_6 = (_Bool)0;
int var_11 = -1827208377;
signed char var_12 = (signed char)3;
long long int var_18 = -1503717667074743837LL;
int zero = 0;
unsigned char var_20 = (unsigned char)11;
signed char var_21 = (signed char)-43;
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
