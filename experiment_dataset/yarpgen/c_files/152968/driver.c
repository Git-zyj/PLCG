#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -5684654673017739588LL;
signed char var_6 = (signed char)106;
unsigned char var_7 = (unsigned char)109;
short var_9 = (short)4107;
int var_15 = -1031645333;
int zero = 0;
long long int var_19 = 753404251694607026LL;
unsigned short var_20 = (unsigned short)37913;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
