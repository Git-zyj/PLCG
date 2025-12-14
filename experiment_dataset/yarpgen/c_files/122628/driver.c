#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)8638;
short var_4 = (short)29322;
unsigned int var_5 = 3026973733U;
unsigned long long int var_7 = 17169003346290776510ULL;
unsigned long long int var_8 = 5690435024290807448ULL;
signed char var_11 = (signed char)-98;
unsigned char var_15 = (unsigned char)144;
unsigned char var_18 = (unsigned char)81;
int zero = 0;
signed char var_20 = (signed char)-108;
signed char var_21 = (signed char)-122;
signed char var_22 = (signed char)-5;
void init() {
}

void checksum() {
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
