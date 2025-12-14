#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3163173104U;
unsigned long long int var_5 = 163983948434812592ULL;
unsigned short var_6 = (unsigned short)60208;
long long int var_10 = 9175775658570893854LL;
int var_11 = 1297287870;
unsigned int var_12 = 2705445352U;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)81;
short var_15 = (short)-10581;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
