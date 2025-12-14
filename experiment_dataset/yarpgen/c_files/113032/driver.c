#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1557649282U;
long long int var_8 = 2418740117331431097LL;
unsigned char var_10 = (unsigned char)150;
short var_12 = (short)20539;
long long int var_13 = 7433533451107365547LL;
unsigned long long int var_14 = 16591436703816279508ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)30155;
short var_17 = (short)24010;
long long int var_18 = -2517794596277609769LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
