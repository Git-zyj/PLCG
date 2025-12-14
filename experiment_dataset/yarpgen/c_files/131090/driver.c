#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8807948946293231117ULL;
int var_4 = -1653300523;
unsigned int var_5 = 1112771634U;
unsigned short var_6 = (unsigned short)37180;
unsigned long long int var_9 = 10136035271359258890ULL;
int zero = 0;
unsigned char var_11 = (unsigned char)129;
unsigned short var_12 = (unsigned short)43378;
unsigned long long int var_13 = 14350804250323657947ULL;
signed char var_14 = (signed char)87;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
