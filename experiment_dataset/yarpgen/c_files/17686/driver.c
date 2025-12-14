#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)177;
long long int var_3 = 2682610880839171970LL;
int var_6 = -364920323;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 86020150U;
int zero = 0;
signed char var_10 = (signed char)67;
short var_11 = (short)-24045;
signed char var_12 = (signed char)-25;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
