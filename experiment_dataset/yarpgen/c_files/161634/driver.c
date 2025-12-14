#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -718887781;
signed char var_1 = (signed char)4;
short var_6 = (short)-29647;
unsigned long long int var_10 = 4809565203181030087ULL;
unsigned short var_11 = (unsigned short)13697;
unsigned long long int var_13 = 17139276511291121390ULL;
signed char var_15 = (signed char)60;
short var_16 = (short)-842;
int var_17 = 1210927473;
int zero = 0;
unsigned char var_18 = (unsigned char)103;
unsigned short var_19 = (unsigned short)49834;
unsigned short var_20 = (unsigned short)59324;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
