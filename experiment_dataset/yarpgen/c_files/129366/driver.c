#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3293902796U;
unsigned long long int var_2 = 11353010761574752604ULL;
unsigned long long int var_3 = 16410038776629409052ULL;
short var_4 = (short)27114;
unsigned char var_5 = (unsigned char)51;
long long int var_6 = 1588446868034894543LL;
unsigned char var_8 = (unsigned char)203;
int zero = 0;
signed char var_10 = (signed char)-72;
unsigned short var_11 = (unsigned short)42676;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
