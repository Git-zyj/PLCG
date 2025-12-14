#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3044596509232081414LL;
unsigned short var_1 = (unsigned short)7819;
int var_2 = 1930212174;
unsigned short var_3 = (unsigned short)55116;
unsigned int var_4 = 4031792604U;
short var_5 = (short)-18626;
short var_6 = (short)-19531;
long long int var_7 = 1186593244857044885LL;
signed char var_9 = (signed char)66;
int zero = 0;
unsigned short var_10 = (unsigned short)4280;
unsigned long long int var_11 = 15932900125159761475ULL;
unsigned short var_12 = (unsigned short)35387;
unsigned char var_13 = (unsigned char)181;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
