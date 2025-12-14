#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)190;
unsigned long long int var_6 = 11738876614835559529ULL;
signed char var_7 = (signed char)-75;
unsigned short var_9 = (unsigned short)12479;
unsigned int var_11 = 3570389955U;
signed char var_12 = (signed char)-27;
int zero = 0;
unsigned long long int var_15 = 2270156604036224478ULL;
unsigned long long int var_16 = 10071147842250070614ULL;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)0;
short var_19 = (short)-26313;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
