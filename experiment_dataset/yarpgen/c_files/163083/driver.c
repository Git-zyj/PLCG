#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11831988923424638535ULL;
unsigned long long int var_8 = 4472974308130913989ULL;
unsigned char var_17 = (unsigned char)180;
int zero = 0;
signed char var_20 = (signed char)-12;
unsigned short var_21 = (unsigned short)55311;
long long int var_22 = -512352272506751685LL;
long long int var_23 = 93039984578822940LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
