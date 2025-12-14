#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-90;
unsigned int var_8 = 2646780618U;
unsigned short var_9 = (unsigned short)23517;
unsigned short var_12 = (unsigned short)14605;
int zero = 0;
long long int var_14 = -4823289658679692071LL;
unsigned long long int var_15 = 5054442816453237505ULL;
unsigned char var_16 = (unsigned char)33;
signed char var_17 = (signed char)-118;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
