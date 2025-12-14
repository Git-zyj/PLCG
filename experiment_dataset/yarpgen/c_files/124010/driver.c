#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-21285;
long long int var_2 = -8478025225186441296LL;
short var_7 = (short)9913;
short var_8 = (short)5092;
long long int var_13 = 1385898406250649705LL;
unsigned short var_14 = (unsigned short)64566;
int zero = 0;
unsigned short var_20 = (unsigned short)5560;
unsigned long long int var_21 = 4498409045932666471ULL;
unsigned long long int var_22 = 10843542758550624475ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
