#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4057734838U;
signed char var_1 = (signed char)21;
short var_3 = (short)1123;
signed char var_6 = (signed char)-57;
unsigned char var_7 = (unsigned char)107;
_Bool var_8 = (_Bool)1;
unsigned char var_9 = (unsigned char)212;
int var_10 = 1094708325;
unsigned long long int var_12 = 449775465878961449ULL;
int var_16 = 411071398;
int var_17 = -851744106;
int zero = 0;
unsigned long long int var_19 = 7646568569862323708ULL;
unsigned short var_20 = (unsigned short)34355;
unsigned long long int var_21 = 977772941907342317ULL;
int var_22 = -2071447721;
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
