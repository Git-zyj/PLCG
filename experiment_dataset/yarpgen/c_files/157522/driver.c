#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3741191676U;
unsigned char var_2 = (unsigned char)155;
unsigned short var_15 = (unsigned short)32685;
unsigned int var_16 = 2135116830U;
long long int var_17 = -8413185777813647192LL;
int zero = 0;
unsigned long long int var_20 = 1990073420158145703ULL;
unsigned short var_21 = (unsigned short)17016;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
