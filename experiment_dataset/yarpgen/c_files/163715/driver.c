#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)26528;
long long int var_7 = -3490901554082091917LL;
int zero = 0;
unsigned long long int var_10 = 2413467448281704320ULL;
long long int var_11 = -6024199028423662246LL;
unsigned short var_12 = (unsigned short)50263;
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
