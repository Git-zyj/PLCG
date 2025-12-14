#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)27550;
unsigned long long int var_8 = 9156274942207895395ULL;
short var_9 = (short)-3430;
unsigned char var_11 = (unsigned char)247;
unsigned char var_13 = (unsigned char)21;
unsigned int var_16 = 4156098339U;
int zero = 0;
unsigned long long int var_18 = 16925094989641334033ULL;
long long int var_19 = -4078655893724763506LL;
short var_20 = (short)-15779;
unsigned long long int var_21 = 4562741178648251684ULL;
unsigned char var_22 = (unsigned char)133;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
