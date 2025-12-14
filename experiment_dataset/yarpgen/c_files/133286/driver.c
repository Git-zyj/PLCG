#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)25658;
unsigned long long int var_4 = 15278296101362632655ULL;
long long int var_5 = 4161937631545045694LL;
long long int var_7 = 2984252574520900839LL;
short var_8 = (short)-16482;
int var_11 = -1811550073;
unsigned char var_12 = (unsigned char)215;
unsigned int var_19 = 281089282U;
int zero = 0;
unsigned short var_20 = (unsigned short)15669;
signed char var_21 = (signed char)98;
void init() {
}

void checksum() {
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
