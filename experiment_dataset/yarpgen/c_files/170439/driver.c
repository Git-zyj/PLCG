#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-17683;
unsigned int var_1 = 120612358U;
unsigned int var_3 = 4280636813U;
unsigned int var_4 = 2447103139U;
unsigned char var_6 = (unsigned char)197;
long long int var_7 = 6070624661324067515LL;
unsigned long long int var_8 = 11540909572521333675ULL;
long long int var_9 = 2465976358382865441LL;
long long int var_10 = 8642043272689687255LL;
signed char var_11 = (signed char)67;
signed char var_12 = (signed char)103;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)66;
int zero = 0;
unsigned long long int var_15 = 17923698824903634762ULL;
short var_16 = (short)9259;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
