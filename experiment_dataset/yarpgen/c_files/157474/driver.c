#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3065099521663742142ULL;
long long int var_3 = 2577023210365830509LL;
signed char var_4 = (signed char)-120;
int var_5 = 753777055;
long long int var_8 = -7328223963133386494LL;
int zero = 0;
signed char var_12 = (signed char)-3;
long long int var_13 = -6838468086055701965LL;
void init() {
}

void checksum() {
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
