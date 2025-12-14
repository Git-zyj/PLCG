#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -940683710;
short var_1 = (short)-31694;
short var_2 = (short)4430;
long long int var_4 = -2039668354277470860LL;
int var_5 = 379939416;
unsigned short var_7 = (unsigned short)53203;
unsigned char var_8 = (unsigned char)105;
unsigned int var_9 = 4067590360U;
unsigned int var_10 = 2517350143U;
int zero = 0;
signed char var_11 = (signed char)13;
unsigned long long int var_12 = 653231575499390014ULL;
unsigned long long int var_13 = 13910800511996251521ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
