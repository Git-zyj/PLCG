#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -991200051;
short var_1 = (short)16528;
unsigned long long int var_2 = 5563689727605049031ULL;
short var_6 = (short)21206;
long long int var_8 = -5533688835506889313LL;
signed char var_9 = (signed char)-30;
int zero = 0;
unsigned char var_10 = (unsigned char)2;
unsigned char var_11 = (unsigned char)206;
unsigned char var_12 = (unsigned char)108;
unsigned short var_13 = (unsigned short)50759;
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
