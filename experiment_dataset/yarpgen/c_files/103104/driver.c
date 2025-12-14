#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -1563207665;
int var_6 = 1221846599;
long long int var_7 = 5738881331953211281LL;
unsigned int var_15 = 2879567145U;
int zero = 0;
unsigned char var_17 = (unsigned char)212;
unsigned short var_18 = (unsigned short)60788;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)-55;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
