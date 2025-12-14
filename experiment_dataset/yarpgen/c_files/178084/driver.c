#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)148;
signed char var_2 = (signed char)-12;
int var_3 = -600587197;
unsigned long long int var_4 = 11251470273715859821ULL;
int var_6 = -147133624;
unsigned char var_7 = (unsigned char)148;
int zero = 0;
long long int var_10 = -4894925271429598548LL;
long long int var_11 = -4567185925887644366LL;
unsigned long long int var_12 = 17314213493652225391ULL;
int var_13 = -1993945602;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
