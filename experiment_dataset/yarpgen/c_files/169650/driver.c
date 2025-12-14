#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2057127183U;
unsigned long long int var_3 = 18179351666682035267ULL;
signed char var_4 = (signed char)2;
short var_14 = (short)13616;
signed char var_16 = (signed char)-76;
int zero = 0;
unsigned int var_20 = 244064762U;
unsigned int var_21 = 1510575300U;
short var_22 = (short)-25427;
signed char var_23 = (signed char)54;
long long int var_24 = 5748155148304914647LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
