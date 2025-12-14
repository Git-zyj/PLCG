#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5113008906748530512ULL;
unsigned char var_11 = (unsigned char)103;
_Bool var_13 = (_Bool)1;
unsigned short var_16 = (unsigned short)7519;
long long int var_17 = -2463831848424702487LL;
int zero = 0;
long long int var_18 = 1927787424040220205LL;
unsigned long long int var_19 = 1130648509406799565ULL;
void init() {
}

void checksum() {
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
