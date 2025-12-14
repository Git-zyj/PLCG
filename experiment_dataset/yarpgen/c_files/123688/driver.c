#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)129;
unsigned short var_3 = (unsigned short)60960;
long long int var_6 = 2707848824515400893LL;
_Bool var_9 = (_Bool)1;
unsigned short var_11 = (unsigned short)43376;
int zero = 0;
unsigned int var_16 = 1818066638U;
long long int var_17 = 4260456872489036885LL;
unsigned long long int var_18 = 15675951671588044321ULL;
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
