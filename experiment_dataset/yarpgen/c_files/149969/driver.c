#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)43646;
signed char var_1 = (signed char)125;
unsigned long long int var_6 = 11770863787689717191ULL;
int var_7 = 1359635352;
unsigned char var_9 = (unsigned char)138;
int zero = 0;
int var_10 = 246238704;
signed char var_11 = (signed char)-57;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
