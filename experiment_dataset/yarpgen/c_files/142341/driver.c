#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 5506676108161527009ULL;
unsigned long long int var_4 = 8333105128986455080ULL;
unsigned long long int var_6 = 1531064149641979146ULL;
int zero = 0;
short var_19 = (short)-5118;
long long int var_20 = 98729943540821772LL;
void init() {
}

void checksum() {
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
