#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-23212;
short var_1 = (short)-8150;
int var_2 = -58953441;
unsigned short var_3 = (unsigned short)64908;
unsigned long long int var_5 = 5536326068892378582ULL;
unsigned short var_12 = (unsigned short)58903;
unsigned short var_14 = (unsigned short)57205;
signed char var_15 = (signed char)-43;
int zero = 0;
unsigned long long int var_18 = 3883293517019919494ULL;
signed char var_19 = (signed char)125;
void init() {
}

void checksum() {
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
