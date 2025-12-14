#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2840194165U;
short var_1 = (short)9994;
unsigned long long int var_2 = 16258273107867410249ULL;
long long int var_3 = -9161570486648202667LL;
unsigned int var_5 = 1746222127U;
unsigned long long int var_8 = 14293419829415656236ULL;
unsigned short var_9 = (unsigned short)59382;
int zero = 0;
int var_10 = -966779686;
unsigned char var_11 = (unsigned char)157;
unsigned char var_12 = (unsigned char)214;
long long int var_13 = 5941512668206503670LL;
unsigned long long int var_14 = 523566293495652643ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
