#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)49227;
unsigned int var_1 = 412121019U;
int var_3 = 1070538783;
unsigned long long int var_8 = 16139372735758840623ULL;
unsigned char var_11 = (unsigned char)151;
unsigned long long int var_12 = 1373107763255977607ULL;
long long int var_16 = 1548852621062039080LL;
int zero = 0;
unsigned long long int var_17 = 11098343844166126857ULL;
int var_18 = 1541768584;
void init() {
}

void checksum() {
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
