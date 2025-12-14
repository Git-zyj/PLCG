#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5744741716998901385LL;
unsigned short var_4 = (unsigned short)23885;
unsigned short var_5 = (unsigned short)4749;
int zero = 0;
long long int var_11 = -8395293047065611070LL;
unsigned short var_12 = (unsigned short)26148;
unsigned long long int var_13 = 1430621380239313536ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
