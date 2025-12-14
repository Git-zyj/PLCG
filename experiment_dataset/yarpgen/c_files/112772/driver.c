#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2586920719483324184LL;
long long int var_1 = -5117071803939239453LL;
int var_2 = 1553464251;
long long int var_3 = 941932373790890128LL;
long long int var_4 = -9115128133515090829LL;
unsigned char var_5 = (unsigned char)227;
int var_6 = -1691197707;
long long int var_7 = 2762739722787458115LL;
signed char var_8 = (signed char)66;
unsigned char var_11 = (unsigned char)78;
signed char var_12 = (signed char)-18;
long long int var_14 = 5048922522352789066LL;
int zero = 0;
signed char var_15 = (signed char)-8;
int var_16 = 1498800216;
unsigned char var_17 = (unsigned char)9;
signed char var_18 = (signed char)-64;
signed char var_19 = (signed char)35;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
