#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1740547355U;
unsigned long long int var_1 = 15762437202391535926ULL;
signed char var_3 = (signed char)67;
long long int var_5 = 7312565918840364210LL;
unsigned long long int var_6 = 4283898663822265472ULL;
unsigned int var_7 = 1431318712U;
unsigned short var_9 = (unsigned short)22156;
int zero = 0;
signed char var_10 = (signed char)-27;
unsigned char var_11 = (unsigned char)51;
long long int var_12 = 4346613358978600056LL;
long long int var_13 = 1487345046841596718LL;
long long int var_14 = -8415662641927747256LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
