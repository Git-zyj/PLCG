#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2625937233189695186LL;
signed char var_1 = (signed char)23;
unsigned int var_2 = 3762075593U;
unsigned short var_3 = (unsigned short)8282;
signed char var_4 = (signed char)-55;
unsigned char var_5 = (unsigned char)194;
unsigned long long int var_6 = 17807188307622292460ULL;
unsigned char var_8 = (unsigned char)93;
int var_10 = -832859487;
int zero = 0;
unsigned int var_12 = 1436648709U;
unsigned char var_13 = (unsigned char)78;
unsigned long long int var_14 = 10285211766109714668ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
