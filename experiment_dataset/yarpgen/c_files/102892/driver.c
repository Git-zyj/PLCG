#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 3898715164735166958ULL;
unsigned char var_6 = (unsigned char)170;
long long int var_7 = -3315718294922957934LL;
unsigned long long int var_9 = 2030827080128430395ULL;
short var_12 = (short)32676;
int zero = 0;
long long int var_14 = 952642730317532444LL;
unsigned char var_15 = (unsigned char)21;
signed char var_16 = (signed char)8;
long long int var_17 = -2417487790022822031LL;
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
