#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -332741850;
unsigned int var_1 = 3800396115U;
unsigned char var_2 = (unsigned char)1;
unsigned short var_3 = (unsigned short)33818;
unsigned short var_4 = (unsigned short)7638;
_Bool var_9 = (_Bool)1;
unsigned short var_12 = (unsigned short)26398;
int zero = 0;
int var_14 = 1760678187;
unsigned int var_15 = 3997698432U;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)-3;
unsigned short var_18 = (unsigned short)6929;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
