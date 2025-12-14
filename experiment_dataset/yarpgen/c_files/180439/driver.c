#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)89;
int var_7 = -1804997765;
unsigned long long int var_9 = 6533733067021830391ULL;
long long int var_10 = 2824058753143385396LL;
int var_11 = 776964698;
unsigned int var_14 = 3415689553U;
unsigned short var_16 = (unsigned short)986;
int zero = 0;
long long int var_19 = -858290463652602015LL;
signed char var_20 = (signed char)72;
void init() {
}

void checksum() {
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
