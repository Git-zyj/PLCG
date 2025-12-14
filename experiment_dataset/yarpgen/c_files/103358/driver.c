#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 885262217U;
unsigned short var_1 = (unsigned short)59943;
unsigned long long int var_2 = 8762868581628868315ULL;
unsigned long long int var_7 = 10084220863556666822ULL;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned long long int var_10 = 1594535706447745436ULL;
unsigned char var_11 = (unsigned char)116;
unsigned int var_12 = 4061578004U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
