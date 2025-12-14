#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10109310680016148904ULL;
unsigned int var_1 = 2274600935U;
unsigned short var_2 = (unsigned short)20538;
int var_3 = -1277093119;
long long int var_4 = -5190019846867831703LL;
unsigned int var_6 = 385576823U;
long long int var_7 = 6350357606926789986LL;
unsigned char var_8 = (unsigned char)27;
unsigned short var_9 = (unsigned short)15779;
long long int var_12 = -4234721967479487075LL;
long long int var_13 = -1905116590169361748LL;
unsigned long long int var_16 = 16528090488531739850ULL;
int zero = 0;
long long int var_19 = -2956972249113397776LL;
int var_20 = 2020394575;
short var_21 = (short)32758;
short var_22 = (short)28058;
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
