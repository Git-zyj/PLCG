#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-10628;
unsigned int var_8 = 3776331960U;
unsigned int var_9 = 2587374779U;
unsigned int var_11 = 427039276U;
signed char var_14 = (signed char)-8;
short var_15 = (short)-17084;
int zero = 0;
unsigned char var_17 = (unsigned char)114;
signed char var_18 = (signed char)-44;
long long int var_19 = 4087675556633777800LL;
void init() {
}

void checksum() {
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
