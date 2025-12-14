#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4619010804475044237LL;
unsigned long long int var_2 = 8782595614666046139ULL;
long long int var_6 = -8500146399487507861LL;
int var_10 = -1861519833;
long long int var_11 = 2943568839826525332LL;
short var_12 = (short)27618;
signed char var_13 = (signed char)79;
unsigned long long int var_14 = 2752242236095536432ULL;
unsigned char var_18 = (unsigned char)111;
int zero = 0;
unsigned long long int var_20 = 9041170948184537380ULL;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 1113877703U;
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
