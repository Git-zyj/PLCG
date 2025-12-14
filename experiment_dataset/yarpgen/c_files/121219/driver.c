#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9276138522170889889ULL;
unsigned char var_2 = (unsigned char)254;
long long int var_3 = 3101866946880586803LL;
_Bool var_5 = (_Bool)0;
long long int var_8 = 2092785709636596878LL;
int var_9 = 418684019;
int zero = 0;
long long int var_13 = -8572665925650942190LL;
signed char var_14 = (signed char)-16;
unsigned char var_15 = (unsigned char)49;
long long int var_16 = 8267094280925038804LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
