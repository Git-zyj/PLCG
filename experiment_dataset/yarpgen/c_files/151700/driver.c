#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1327993320;
int var_1 = 63985856;
int var_2 = -1554365045;
int var_5 = -393444991;
int var_6 = -332094840;
signed char var_7 = (signed char)59;
int zero = 0;
short var_10 = (short)-27421;
unsigned short var_11 = (unsigned short)35963;
long long int var_12 = -1586280277997888576LL;
int var_13 = -231305801;
long long int var_14 = 1409257210700854996LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
