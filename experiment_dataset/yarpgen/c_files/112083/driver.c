#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3441049742058428311LL;
unsigned long long int var_3 = 10570453182496136654ULL;
unsigned long long int var_4 = 8242194810676750910ULL;
int var_5 = 860409642;
long long int var_6 = -1592634654990888720LL;
unsigned short var_9 = (unsigned short)30443;
int var_12 = -687559521;
int zero = 0;
unsigned short var_16 = (unsigned short)11439;
unsigned int var_17 = 1761439140U;
int var_18 = 481489640;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
