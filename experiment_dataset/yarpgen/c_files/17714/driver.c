#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2976257725U;
unsigned int var_2 = 708451379U;
signed char var_3 = (signed char)91;
unsigned int var_6 = 3122414428U;
unsigned int var_7 = 920622290U;
signed char var_8 = (signed char)-4;
long long int var_11 = -5560843878544066855LL;
long long int var_12 = -3632601556492261484LL;
long long int var_14 = -8167364154662931932LL;
unsigned int var_15 = 3988472348U;
int zero = 0;
long long int var_17 = 7973976820567445753LL;
unsigned int var_18 = 3840040937U;
long long int var_19 = 1408328696833916763LL;
unsigned int var_20 = 1248671004U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
