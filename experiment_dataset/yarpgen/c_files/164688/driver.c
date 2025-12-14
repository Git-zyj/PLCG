#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1282510684;
unsigned short var_8 = (unsigned short)60010;
unsigned long long int var_9 = 8668652943994494126ULL;
unsigned short var_14 = (unsigned short)49991;
int zero = 0;
_Bool var_20 = (_Bool)0;
short var_21 = (short)-8149;
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
