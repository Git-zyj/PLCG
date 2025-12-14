#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -5065720465077787313LL;
long long int var_3 = -7069987741447084729LL;
long long int var_7 = -5353488596060617333LL;
unsigned int var_10 = 3169665393U;
int zero = 0;
long long int var_13 = -4050472499932482089LL;
unsigned char var_14 = (unsigned char)26;
unsigned short var_15 = (unsigned short)3731;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
