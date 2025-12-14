#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5432175394256473628LL;
long long int var_7 = 5181153478395891938LL;
unsigned int var_9 = 3386238199U;
short var_10 = (short)32705;
int zero = 0;
int var_12 = -744832308;
short var_13 = (short)-28122;
unsigned short var_14 = (unsigned short)60666;
unsigned int var_15 = 3470694213U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
