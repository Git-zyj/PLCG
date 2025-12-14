#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1458307421U;
int var_5 = -1236560071;
unsigned char var_6 = (unsigned char)220;
long long int var_7 = -9158610870303054516LL;
unsigned short var_9 = (unsigned short)3209;
int zero = 0;
_Bool var_10 = (_Bool)1;
long long int var_11 = -1229420487832634610LL;
long long int var_12 = -2724545580533053702LL;
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
