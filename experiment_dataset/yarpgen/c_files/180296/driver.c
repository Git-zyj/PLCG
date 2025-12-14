#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)92;
long long int var_5 = -6666403861573506068LL;
unsigned long long int var_8 = 16332938514144238223ULL;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 5867229531749386255ULL;
unsigned short var_20 = (unsigned short)510;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
