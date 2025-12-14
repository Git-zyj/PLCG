#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_8 = (signed char)-60;
int var_9 = -1072171214;
unsigned long long int var_12 = 13530620282460397492ULL;
signed char var_14 = (signed char)-73;
int zero = 0;
signed char var_15 = (signed char)106;
int var_16 = 1653408949;
long long int var_17 = 6911837863681540613LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
