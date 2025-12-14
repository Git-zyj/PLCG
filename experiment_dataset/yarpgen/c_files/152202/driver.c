#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-5086;
unsigned short var_1 = (unsigned short)51171;
int var_3 = -973862754;
unsigned long long int var_4 = 15485123876713638970ULL;
unsigned short var_5 = (unsigned short)46771;
unsigned short var_8 = (unsigned short)16444;
long long int var_9 = 5498677197458800420LL;
int zero = 0;
unsigned long long int var_11 = 4465206415144113348ULL;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 200315311U;
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
