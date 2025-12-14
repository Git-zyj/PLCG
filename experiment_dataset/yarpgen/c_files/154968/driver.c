#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
unsigned long long int var_7 = 7953374836853341271ULL;
unsigned short var_9 = (unsigned short)62691;
int zero = 0;
unsigned long long int var_16 = 3724036373978467436ULL;
unsigned short var_17 = (unsigned short)11959;
unsigned char var_18 = (unsigned char)101;
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
