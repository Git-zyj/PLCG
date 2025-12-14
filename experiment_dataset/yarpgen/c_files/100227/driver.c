#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)79;
unsigned int var_6 = 4025401408U;
signed char var_7 = (signed char)83;
unsigned int var_10 = 2477461084U;
short var_12 = (short)19430;
unsigned int var_15 = 3025204189U;
int zero = 0;
long long int var_17 = -2205923268451964124LL;
signed char var_18 = (signed char)90;
int var_19 = 865579483;
unsigned char var_20 = (unsigned char)216;
unsigned int var_21 = 3395321223U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
