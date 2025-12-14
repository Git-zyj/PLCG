#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)52;
int var_2 = 638518466;
unsigned long long int var_4 = 15396112086157914082ULL;
signed char var_6 = (signed char)123;
int var_7 = 497458814;
short var_9 = (short)22139;
unsigned short var_11 = (unsigned short)20399;
int zero = 0;
short var_12 = (short)32114;
unsigned char var_13 = (unsigned char)137;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
