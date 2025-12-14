#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 1587993054443006749ULL;
int var_4 = 1493186487;
unsigned int var_5 = 3089113745U;
unsigned char var_11 = (unsigned char)169;
unsigned int var_12 = 3278040147U;
int var_15 = -1930555754;
int zero = 0;
unsigned short var_17 = (unsigned short)42221;
unsigned int var_18 = 2821608189U;
int var_19 = -701230370;
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
