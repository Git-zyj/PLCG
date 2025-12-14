#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 14057363588762605912ULL;
signed char var_7 = (signed char)8;
long long int var_11 = 4679610416926982532LL;
int zero = 0;
unsigned int var_12 = 45943644U;
short var_13 = (short)29023;
long long int var_14 = -423039247818923802LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
