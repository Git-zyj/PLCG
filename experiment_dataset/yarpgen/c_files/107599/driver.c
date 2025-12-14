#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-68;
signed char var_2 = (signed char)-55;
int var_3 = -1648316735;
signed char var_4 = (signed char)-126;
signed char var_5 = (signed char)5;
_Bool var_6 = (_Bool)1;
int zero = 0;
unsigned char var_11 = (unsigned char)181;
unsigned char var_12 = (unsigned char)175;
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
