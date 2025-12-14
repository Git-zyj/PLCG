#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-10;
int var_7 = -1559707703;
unsigned long long int var_9 = 18444440567446794475ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)67;
unsigned short var_11 = (unsigned short)43567;
unsigned int var_12 = 3475872282U;
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
