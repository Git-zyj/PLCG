#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)18061;
long long int var_6 = -8716128209975179589LL;
unsigned char var_17 = (unsigned char)69;
signed char var_18 = (signed char)49;
unsigned short var_19 = (unsigned short)28612;
int zero = 0;
signed char var_20 = (signed char)-110;
unsigned short var_21 = (unsigned short)38278;
int var_22 = 1306590967;
long long int var_23 = -60364662618890842LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
