#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)226;
int var_4 = -851723361;
int var_5 = -905628032;
int var_7 = -1332685329;
unsigned char var_9 = (unsigned char)98;
unsigned long long int var_10 = 8793024897743648266ULL;
long long int var_11 = 8103099673253262902LL;
int var_12 = 1907620622;
short var_13 = (short)-22735;
unsigned char var_15 = (unsigned char)29;
unsigned long long int var_16 = 14313227772628418802ULL;
int zero = 0;
long long int var_17 = -2583503157123906003LL;
unsigned int var_18 = 1986084300U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
