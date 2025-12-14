#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 870992634U;
short var_4 = (short)-30351;
unsigned int var_6 = 2554615464U;
unsigned long long int var_8 = 4068301097259133667ULL;
unsigned char var_9 = (unsigned char)90;
long long int var_12 = -241442986289701649LL;
int zero = 0;
unsigned int var_14 = 4064549302U;
int var_15 = 732920096;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
