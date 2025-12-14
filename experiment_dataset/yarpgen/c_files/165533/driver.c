#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1107724319;
int var_6 = 2068096912;
unsigned long long int var_10 = 2965633879759906065ULL;
unsigned long long int var_11 = 4675796785469361242ULL;
int var_12 = -947612167;
unsigned int var_18 = 3829521639U;
int zero = 0;
int var_19 = -1108307635;
int var_20 = -1502882109;
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
