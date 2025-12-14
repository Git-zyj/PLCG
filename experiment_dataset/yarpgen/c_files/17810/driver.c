#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6384181773871787750ULL;
unsigned short var_1 = (unsigned short)44072;
unsigned long long int var_2 = 9452933105561521042ULL;
long long int var_3 = 8218052272095322059LL;
signed char var_5 = (signed char)80;
unsigned short var_6 = (unsigned short)29908;
signed char var_7 = (signed char)38;
unsigned long long int var_8 = 115654134198630127ULL;
int var_9 = -1302239372;
unsigned short var_11 = (unsigned short)39296;
int zero = 0;
signed char var_12 = (signed char)-119;
unsigned char var_13 = (unsigned char)48;
unsigned short var_14 = (unsigned short)28063;
unsigned long long int var_15 = 14609136767523310908ULL;
long long int var_16 = -6743987649501446736LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
