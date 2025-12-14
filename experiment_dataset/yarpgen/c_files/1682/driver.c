#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10230491271746865838ULL;
unsigned int var_2 = 3132697047U;
unsigned long long int var_3 = 3073331046157259045ULL;
signed char var_4 = (signed char)109;
long long int var_5 = 22197280138930260LL;
unsigned long long int var_6 = 16669027786326177820ULL;
unsigned char var_7 = (unsigned char)59;
unsigned int var_8 = 502238551U;
_Bool var_9 = (_Bool)1;
long long int var_10 = -5948727336809497795LL;
short var_11 = (short)-27668;
int var_12 = -851448183;
signed char var_13 = (signed char)116;
int zero = 0;
long long int var_14 = 7241135685239976523LL;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 10482417603615759656ULL;
unsigned short var_17 = (unsigned short)59531;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
