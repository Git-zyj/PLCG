#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-112;
short var_2 = (short)26337;
unsigned long long int var_4 = 8353115733782153984ULL;
long long int var_8 = 6139762122949888085LL;
unsigned int var_9 = 4069149520U;
int zero = 0;
long long int var_14 = 9209695704245025562LL;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 11355813998040502661ULL;
void init() {
}

void checksum() {
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
