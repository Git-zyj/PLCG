#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)29522;
signed char var_8 = (signed char)125;
_Bool var_9 = (_Bool)0;
int var_10 = 619645226;
unsigned int var_11 = 2988890745U;
unsigned short var_15 = (unsigned short)41113;
signed char var_16 = (signed char)-74;
int zero = 0;
unsigned short var_18 = (unsigned short)41005;
_Bool var_19 = (_Bool)1;
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
