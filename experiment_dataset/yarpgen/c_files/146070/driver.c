#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 415212659;
unsigned short var_5 = (unsigned short)59592;
_Bool var_6 = (_Bool)1;
int var_7 = -1192365881;
signed char var_8 = (signed char)-35;
int zero = 0;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)111;
unsigned long long int var_13 = 12488385232618634122ULL;
void init() {
}

void checksum() {
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
