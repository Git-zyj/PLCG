#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-14777;
short var_1 = (short)-27503;
short var_2 = (short)-16172;
unsigned int var_5 = 720190421U;
unsigned char var_7 = (unsigned char)28;
short var_9 = (short)-7844;
int zero = 0;
long long int var_10 = -4040288989989426541LL;
short var_11 = (short)9199;
signed char var_12 = (signed char)-90;
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
