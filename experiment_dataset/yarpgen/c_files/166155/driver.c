#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)48790;
unsigned int var_6 = 3629556032U;
long long int var_12 = -1192524303606725612LL;
int zero = 0;
unsigned char var_18 = (unsigned char)174;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 13842520496503565061ULL;
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
