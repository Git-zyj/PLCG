#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3834602592U;
unsigned char var_11 = (unsigned char)116;
int zero = 0;
unsigned long long int var_19 = 13981077995227035270ULL;
unsigned long long int var_20 = 5535953989268517873ULL;
unsigned long long int var_21 = 3876435536077566156ULL;
long long int var_22 = 7872115898345999111LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
