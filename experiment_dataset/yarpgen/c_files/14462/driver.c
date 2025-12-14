#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_3 = (unsigned char)111;
unsigned long long int var_4 = 5777602984973027053ULL;
long long int var_5 = -8578087324597584108LL;
int var_7 = 246220330;
unsigned short var_9 = (unsigned short)44926;
unsigned int var_13 = 1554379332U;
int zero = 0;
short var_14 = (short)4800;
long long int var_15 = -4825363881006602653LL;
unsigned char var_16 = (unsigned char)155;
unsigned long long int var_17 = 10435805687320362896ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
