#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 6188619347000489322LL;
long long int var_3 = -5185914806426883195LL;
unsigned char var_6 = (unsigned char)14;
_Bool var_8 = (_Bool)1;
unsigned short var_9 = (unsigned short)59480;
long long int var_10 = 2438112296950823344LL;
unsigned long long int var_11 = 17538296116998999957ULL;
int zero = 0;
long long int var_12 = -3762417502415059202LL;
_Bool var_13 = (_Bool)0;
long long int var_14 = -5499912789219432973LL;
signed char var_15 = (signed char)112;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
