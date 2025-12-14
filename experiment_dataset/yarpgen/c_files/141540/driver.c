#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)60;
long long int var_3 = 163300249470726267LL;
unsigned short var_4 = (unsigned short)584;
unsigned long long int var_5 = 10835123832425184762ULL;
unsigned char var_7 = (unsigned char)101;
short var_8 = (short)7306;
unsigned long long int var_9 = 1233609920993368356ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)13653;
int var_11 = 579480672;
short var_12 = (short)-13124;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
