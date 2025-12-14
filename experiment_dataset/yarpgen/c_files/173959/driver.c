#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-46;
signed char var_2 = (signed char)101;
signed char var_3 = (signed char)116;
short var_6 = (short)29419;
short var_7 = (short)-17469;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)-106;
unsigned long long int var_11 = 717514604405072968ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)68;
unsigned long long int var_14 = 12063723099964191559ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
