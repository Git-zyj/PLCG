#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9759881089929919521ULL;
long long int var_1 = 2065116738491001617LL;
long long int var_3 = 9100257404798629672LL;
unsigned char var_10 = (unsigned char)135;
int zero = 0;
unsigned long long int var_16 = 15884717545447604475ULL;
long long int var_17 = -75525621048937235LL;
unsigned int var_18 = 2422480967U;
int var_19 = -552579978;
void init() {
}

void checksum() {
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
