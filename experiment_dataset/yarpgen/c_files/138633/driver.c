#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1504253208U;
_Bool var_2 = (_Bool)1;
unsigned short var_3 = (unsigned short)17557;
unsigned char var_4 = (unsigned char)194;
unsigned long long int var_8 = 2248766366886175857ULL;
signed char var_9 = (signed char)-95;
int zero = 0;
signed char var_12 = (signed char)-53;
unsigned long long int var_13 = 10798622410245495461ULL;
void init() {
}

void checksum() {
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
