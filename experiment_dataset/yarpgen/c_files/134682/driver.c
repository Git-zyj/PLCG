#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1409221019355118892LL;
short var_4 = (short)-24767;
signed char var_5 = (signed char)-117;
unsigned long long int var_6 = 9964193543551541155ULL;
unsigned char var_7 = (unsigned char)237;
unsigned int var_9 = 3607942518U;
unsigned long long int var_10 = 3505934801922333008ULL;
int zero = 0;
int var_11 = 1233177826;
unsigned char var_12 = (unsigned char)18;
long long int var_13 = -9138436530430966397LL;
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
