#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12482325689506553657ULL;
unsigned long long int var_4 = 9178375313046730691ULL;
long long int var_14 = -2157284392706253909LL;
int zero = 0;
unsigned short var_19 = (unsigned short)8404;
long long int var_20 = -7352862721297491698LL;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
