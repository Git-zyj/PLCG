#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15654960167603376295ULL;
unsigned long long int var_2 = 14394932107656291310ULL;
int var_4 = -1363395926;
unsigned char var_9 = (unsigned char)140;
int zero = 0;
int var_18 = 805055732;
short var_19 = (short)20385;
unsigned char var_20 = (unsigned char)46;
unsigned int var_21 = 3983848924U;
void init() {
}

void checksum() {
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
