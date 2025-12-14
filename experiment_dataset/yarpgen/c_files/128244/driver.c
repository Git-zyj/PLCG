#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)20467;
_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)222;
unsigned char var_4 = (unsigned char)128;
signed char var_5 = (signed char)-44;
unsigned long long int var_6 = 16183975379149548850ULL;
unsigned short var_7 = (unsigned short)24479;
unsigned short var_8 = (unsigned short)47042;
short var_9 = (short)-695;
int zero = 0;
short var_10 = (short)6656;
int var_11 = -694072393;
short var_12 = (short)18482;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
