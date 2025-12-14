#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)228;
long long int var_2 = -5171795459203998316LL;
int var_3 = -700190865;
unsigned int var_4 = 3445438129U;
unsigned char var_5 = (unsigned char)69;
unsigned char var_6 = (unsigned char)168;
long long int var_7 = -3488073042226492873LL;
long long int var_9 = -2743647658547560756LL;
int zero = 0;
unsigned char var_10 = (unsigned char)238;
unsigned char var_11 = (unsigned char)155;
short var_12 = (short)-16507;
unsigned char var_13 = (unsigned char)93;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
