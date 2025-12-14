#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)8937;
long long int var_3 = -6775933270595560210LL;
long long int var_6 = -828867118438929691LL;
int var_10 = -672655774;
unsigned short var_12 = (unsigned short)14442;
unsigned short var_13 = (unsigned short)52936;
int zero = 0;
int var_19 = 1422664905;
unsigned short var_20 = (unsigned short)48587;
unsigned long long int var_21 = 1497454480833150747ULL;
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
