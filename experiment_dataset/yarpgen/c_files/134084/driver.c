#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4164258834640861022LL;
long long int var_1 = -6050788414200625629LL;
unsigned char var_4 = (unsigned char)191;
unsigned int var_5 = 4225641049U;
unsigned int var_7 = 3608716874U;
unsigned long long int var_9 = 7643365371027614991ULL;
int zero = 0;
unsigned int var_15 = 314046954U;
unsigned char var_16 = (unsigned char)251;
signed char var_17 = (signed char)-45;
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
