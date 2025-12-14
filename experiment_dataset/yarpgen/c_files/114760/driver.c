#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)143;
long long int var_1 = 6246603366582263793LL;
unsigned short var_5 = (unsigned short)63942;
long long int var_6 = 5879422831978170699LL;
int var_9 = 46800284;
int zero = 0;
long long int var_10 = -8026139840284788911LL;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)57143;
unsigned long long int var_13 = 11667337226394314050ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
