#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1241587557;
_Bool var_1 = (_Bool)1;
unsigned short var_3 = (unsigned short)33150;
unsigned char var_4 = (unsigned char)79;
short var_5 = (short)-7775;
unsigned long long int var_6 = 11135306507683238510ULL;
int var_8 = 1871943532;
_Bool var_9 = (_Bool)1;
int zero = 0;
_Bool var_12 = (_Bool)1;
int var_13 = -314373610;
unsigned char var_14 = (unsigned char)194;
int var_15 = -348097658;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
