#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 2007113794;
long long int var_3 = -3476413718776797708LL;
unsigned short var_6 = (unsigned short)24843;
unsigned char var_7 = (unsigned char)35;
unsigned long long int var_8 = 17889267034751138931ULL;
unsigned short var_9 = (unsigned short)50896;
int var_10 = -1880704772;
short var_13 = (short)23119;
int zero = 0;
long long int var_15 = 1058421218232469420LL;
unsigned int var_16 = 1138632335U;
unsigned long long int var_17 = 4245548800508238316ULL;
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
