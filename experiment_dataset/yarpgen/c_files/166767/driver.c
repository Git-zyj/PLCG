#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)32581;
unsigned long long int var_4 = 12361757776759938432ULL;
long long int var_7 = 7987556910410042561LL;
unsigned char var_8 = (unsigned char)76;
unsigned short var_9 = (unsigned short)11144;
unsigned long long int var_10 = 1107869135462345122ULL;
short var_11 = (short)-27426;
unsigned short var_14 = (unsigned short)9696;
int zero = 0;
unsigned int var_17 = 242531891U;
unsigned short var_18 = (unsigned short)31989;
unsigned char var_19 = (unsigned char)27;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
