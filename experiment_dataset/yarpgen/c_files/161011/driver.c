#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)106;
long long int var_7 = 2909824708651182092LL;
signed char var_9 = (signed char)-116;
long long int var_10 = -717923251726488716LL;
unsigned int var_11 = 152483007U;
unsigned char var_12 = (unsigned char)255;
unsigned int var_13 = 2049862603U;
long long int var_14 = 7109014862798789848LL;
int zero = 0;
unsigned long long int var_16 = 12541516904370201609ULL;
long long int var_17 = -7796664436313340514LL;
unsigned char var_18 = (unsigned char)242;
signed char var_19 = (signed char)-60;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
