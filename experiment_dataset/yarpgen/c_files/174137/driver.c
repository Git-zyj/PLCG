#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 2823913872556880486LL;
unsigned char var_3 = (unsigned char)249;
long long int var_7 = 9212078799187934588LL;
int zero = 0;
_Bool var_10 = (_Bool)0;
int var_11 = -21383933;
_Bool var_12 = (_Bool)1;
int var_13 = 263832181;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
