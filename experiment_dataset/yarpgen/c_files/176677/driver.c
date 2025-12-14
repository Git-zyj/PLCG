#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_11 = -728584859506529742LL;
unsigned long long int var_12 = 17484363985800908528ULL;
short var_13 = (short)2348;
int zero = 0;
short var_15 = (short)15472;
unsigned long long int var_16 = 4871809317901172521ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
