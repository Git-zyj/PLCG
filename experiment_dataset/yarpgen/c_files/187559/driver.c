#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)23837;
unsigned short var_3 = (unsigned short)41874;
unsigned short var_4 = (unsigned short)15716;
unsigned char var_6 = (unsigned char)142;
unsigned char var_7 = (unsigned char)219;
unsigned int var_8 = 3351689133U;
signed char var_9 = (signed char)-13;
unsigned short var_10 = (unsigned short)57111;
unsigned int var_11 = 2907521622U;
int zero = 0;
signed char var_12 = (signed char)-91;
unsigned short var_13 = (unsigned short)31483;
short var_14 = (short)-21475;
void init() {
}

void checksum() {
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
