#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)7777;
long long int var_2 = -1135287221197231974LL;
long long int var_3 = -40560140049907738LL;
signed char var_7 = (signed char)78;
signed char var_10 = (signed char)-109;
int zero = 0;
unsigned char var_13 = (unsigned char)97;
_Bool var_14 = (_Bool)1;
int var_15 = 1014706789;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
