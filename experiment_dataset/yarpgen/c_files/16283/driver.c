#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)31;
unsigned char var_2 = (unsigned char)189;
int var_4 = -49462434;
int var_6 = -2041208282;
unsigned char var_8 = (unsigned char)185;
unsigned int var_10 = 1001040994U;
unsigned char var_15 = (unsigned char)202;
unsigned long long int var_17 = 15464620211102739978ULL;
int zero = 0;
int var_19 = 79869267;
unsigned long long int var_20 = 2348961055301265995ULL;
int var_21 = -1213216867;
unsigned short var_22 = (unsigned short)50825;
void init() {
}

void checksum() {
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
