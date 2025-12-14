#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11293717432269728601ULL;
unsigned short var_4 = (unsigned short)4211;
signed char var_5 = (signed char)-32;
long long int var_6 = 3150177935358010861LL;
unsigned int var_9 = 1001934839U;
int zero = 0;
unsigned char var_11 = (unsigned char)108;
signed char var_12 = (signed char)-48;
long long int var_13 = 3537469291300199349LL;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 1135025475431141677ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
