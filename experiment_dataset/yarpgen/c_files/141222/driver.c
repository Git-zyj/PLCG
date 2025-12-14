#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)22397;
unsigned char var_2 = (unsigned char)240;
unsigned int var_3 = 1340579704U;
_Bool var_5 = (_Bool)0;
_Bool var_9 = (_Bool)1;
int zero = 0;
signed char var_10 = (signed char)-106;
int var_11 = -655757584;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
