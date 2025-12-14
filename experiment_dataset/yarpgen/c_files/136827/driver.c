#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -2505448174087052425LL;
_Bool var_4 = (_Bool)0;
_Bool var_7 = (_Bool)0;
unsigned char var_8 = (unsigned char)132;
int var_9 = -470987997;
int var_10 = 1141646631;
int var_11 = -1909454216;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned long long int var_15 = 16009579011614641814ULL;
unsigned char var_16 = (unsigned char)5;
long long int var_17 = 4719951986800827740LL;
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
