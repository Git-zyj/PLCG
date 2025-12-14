#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)254;
unsigned short var_5 = (unsigned short)26143;
unsigned long long int var_8 = 4154646057940451449ULL;
unsigned char var_9 = (unsigned char)123;
unsigned char var_12 = (unsigned char)22;
unsigned long long int var_15 = 17064268879559655294ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)43552;
long long int var_17 = 3684377135615872205LL;
signed char var_18 = (signed char)109;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
