#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1572385197;
_Bool var_9 = (_Bool)1;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)-81;
int zero = 0;
unsigned short var_20 = (unsigned short)31112;
signed char var_21 = (signed char)108;
long long int var_22 = -2799768179799779468LL;
int var_23 = 2089116540;
unsigned char var_24 = (unsigned char)73;
unsigned short var_25 = (unsigned short)23901;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
