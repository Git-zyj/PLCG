#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1624547816U;
unsigned int var_1 = 2634864405U;
unsigned int var_2 = 1699451255U;
long long int var_4 = 5171244571476840085LL;
unsigned int var_5 = 3390774394U;
unsigned int var_10 = 4184638240U;
unsigned int var_12 = 151491567U;
unsigned int var_13 = 1216594566U;
unsigned int var_14 = 2181025360U;
long long int var_17 = -7339600231264148996LL;
int zero = 0;
unsigned int var_19 = 946598467U;
long long int var_20 = 3237046798995637795LL;
long long int var_21 = 4379000010567694658LL;
unsigned int var_22 = 1176183600U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
