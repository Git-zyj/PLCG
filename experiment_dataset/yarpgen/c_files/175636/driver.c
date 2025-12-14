#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8910880126965498331LL;
unsigned char var_2 = (unsigned char)136;
int var_7 = 445440809;
long long int var_10 = 3169933303605845283LL;
long long int var_12 = -8976818225014651179LL;
unsigned int var_13 = 994584104U;
long long int var_17 = 9218225703240632562LL;
int zero = 0;
unsigned short var_18 = (unsigned short)2243;
unsigned int var_19 = 1295415115U;
void init() {
}

void checksum() {
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
