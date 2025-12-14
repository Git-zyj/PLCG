#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16415462388719373621ULL;
signed char var_2 = (signed char)-3;
unsigned long long int var_3 = 2458139926101153013ULL;
long long int var_6 = 918091213360996654LL;
long long int var_9 = 1678076382457123555LL;
int zero = 0;
short var_10 = (short)-15204;
_Bool var_11 = (_Bool)1;
unsigned char var_12 = (unsigned char)189;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
