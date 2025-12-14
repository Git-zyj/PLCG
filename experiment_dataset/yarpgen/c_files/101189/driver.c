#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)121;
unsigned char var_3 = (unsigned char)4;
unsigned int var_4 = 1753168349U;
long long int var_6 = -7346757671592609302LL;
int var_8 = 872249598;
int zero = 0;
unsigned long long int var_11 = 2945579829084844871ULL;
unsigned long long int var_12 = 2613463194052788104ULL;
unsigned char var_13 = (unsigned char)238;
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
