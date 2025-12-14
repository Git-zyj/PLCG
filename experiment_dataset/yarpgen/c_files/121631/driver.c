#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8844527400867026381ULL;
unsigned short var_4 = (unsigned short)5733;
int var_5 = -888741973;
unsigned long long int var_7 = 1067711401685138663ULL;
unsigned short var_9 = (unsigned short)57523;
long long int var_10 = 5831497847627881166LL;
long long int var_11 = -82471256684261442LL;
unsigned int var_12 = 3626517486U;
unsigned long long int var_16 = 2320323321289947641ULL;
int zero = 0;
unsigned long long int var_20 = 12232482731096405304ULL;
unsigned int var_21 = 1215767638U;
long long int var_22 = 7658724665504699219LL;
void init() {
}

void checksum() {
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
