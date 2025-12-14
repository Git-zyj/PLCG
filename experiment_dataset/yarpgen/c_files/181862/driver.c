#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)145;
unsigned short var_3 = (unsigned short)11601;
unsigned long long int var_4 = 6972742513242234127ULL;
long long int var_7 = -1488128557753649377LL;
unsigned long long int var_8 = 16752970712690699398ULL;
unsigned long long int var_9 = 6100781820255367272ULL;
unsigned long long int var_13 = 16465073171821596075ULL;
int zero = 0;
long long int var_14 = -9053716426434909488LL;
unsigned long long int var_15 = 638673581322488088ULL;
unsigned long long int var_16 = 8404954573901209106ULL;
unsigned long long int var_17 = 17588885194868714748ULL;
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
