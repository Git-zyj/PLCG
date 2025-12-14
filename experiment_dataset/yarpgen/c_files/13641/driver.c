#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2150963532056985954ULL;
unsigned int var_2 = 4015877806U;
unsigned int var_4 = 2483157526U;
_Bool var_8 = (_Bool)1;
_Bool var_10 = (_Bool)1;
unsigned char var_12 = (unsigned char)27;
unsigned long long int var_14 = 6691035056239151263ULL;
int zero = 0;
unsigned long long int var_16 = 11708269945707359022ULL;
unsigned char var_17 = (unsigned char)102;
long long int var_18 = 4246694212865918395LL;
unsigned long long int var_19 = 8760674752778862264ULL;
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
