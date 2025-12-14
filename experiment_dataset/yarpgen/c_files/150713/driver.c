#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3203886791979893446LL;
unsigned char var_1 = (unsigned char)40;
long long int var_5 = -1916374217285877601LL;
signed char var_6 = (signed char)2;
unsigned long long int var_7 = 8278951223652024475ULL;
long long int var_8 = -3080783558223119206LL;
unsigned char var_11 = (unsigned char)123;
unsigned char var_14 = (unsigned char)247;
signed char var_16 = (signed char)-93;
long long int var_18 = 2520543458473926209LL;
int zero = 0;
long long int var_19 = 8479654644416034927LL;
unsigned long long int var_20 = 18121396356200988310ULL;
unsigned char var_21 = (unsigned char)124;
signed char var_22 = (signed char)107;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
