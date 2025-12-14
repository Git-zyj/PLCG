#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4626086654893709349LL;
unsigned short var_3 = (unsigned short)26512;
_Bool var_7 = (_Bool)1;
long long int var_12 = -8082571307018148225LL;
int zero = 0;
long long int var_14 = 2883871724286036934LL;
unsigned char var_15 = (unsigned char)6;
void init() {
}

void checksum() {
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
