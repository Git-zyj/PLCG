#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7892105555508106814ULL;
int var_2 = 1283169416;
short var_9 = (short)-16488;
int zero = 0;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)-108;
unsigned char var_20 = (unsigned char)140;
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
