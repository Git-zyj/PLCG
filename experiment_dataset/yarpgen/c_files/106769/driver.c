#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4265739098U;
long long int var_8 = 8525196850787747827LL;
int var_9 = -225069270;
int var_12 = -136861177;
unsigned long long int var_14 = 5881740949385487093ULL;
unsigned int var_16 = 1336197672U;
unsigned int var_17 = 1845323901U;
int zero = 0;
unsigned char var_19 = (unsigned char)229;
unsigned long long int var_20 = 4174171999113710590ULL;
int var_21 = 1331702365;
void init() {
}

void checksum() {
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
