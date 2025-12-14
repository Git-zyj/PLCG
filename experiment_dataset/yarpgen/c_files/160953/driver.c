#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3895046688U;
unsigned long long int var_1 = 13486250371419838991ULL;
int var_3 = -94199470;
long long int var_5 = -2940163278499468079LL;
int var_9 = 809139568;
unsigned char var_10 = (unsigned char)12;
unsigned char var_11 = (unsigned char)214;
long long int var_13 = 5548212068258747437LL;
long long int var_15 = 3725723071546202688LL;
long long int var_16 = -3492237460854280883LL;
unsigned int var_17 = 1887464092U;
int zero = 0;
unsigned int var_18 = 4205472380U;
unsigned int var_19 = 944996034U;
short var_20 = (short)-27960;
void init() {
}

void checksum() {
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
