#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)106;
short var_2 = (short)-30089;
short var_3 = (short)21756;
signed char var_4 = (signed char)119;
short var_6 = (short)12086;
signed char var_7 = (signed char)10;
int var_8 = 1800325424;
unsigned long long int var_9 = 12293212750375253960ULL;
unsigned int var_10 = 3704519627U;
unsigned short var_11 = (unsigned short)28910;
short var_12 = (short)8765;
unsigned char var_13 = (unsigned char)170;
int var_14 = -632869380;
short var_15 = (short)-23814;
unsigned int var_16 = 510829605U;
int zero = 0;
signed char var_18 = (signed char)-118;
unsigned short var_19 = (unsigned short)43040;
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
