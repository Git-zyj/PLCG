#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -4138181767685400358LL;
int var_8 = 2086107090;
long long int var_10 = 6016925262846724036LL;
int var_13 = 817521820;
_Bool var_16 = (_Bool)0;
int zero = 0;
signed char var_19 = (signed char)79;
unsigned char var_20 = (unsigned char)188;
unsigned char var_21 = (unsigned char)191;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
