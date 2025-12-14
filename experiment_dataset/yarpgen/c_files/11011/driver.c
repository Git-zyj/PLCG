#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = 3947651543430969489LL;
short var_8 = (short)-23771;
unsigned long long int var_11 = 13166717565408955596ULL;
long long int var_12 = 9101183665100285356LL;
long long int var_13 = -229261924158998708LL;
short var_14 = (short)17968;
int zero = 0;
unsigned long long int var_20 = 4791825808395577706ULL;
unsigned short var_21 = (unsigned short)10402;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
