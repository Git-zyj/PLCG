#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1638535248;
long long int var_3 = -4751213237675498036LL;
unsigned short var_7 = (unsigned short)22631;
int var_10 = 2094110569;
int zero = 0;
int var_13 = 159082046;
unsigned long long int var_14 = 5173154268560731123ULL;
signed char var_15 = (signed char)-82;
signed char var_16 = (signed char)-106;
void init() {
}

void checksum() {
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
