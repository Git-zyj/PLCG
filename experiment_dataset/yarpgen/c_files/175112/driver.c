#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 327215367;
unsigned char var_2 = (unsigned char)211;
long long int var_4 = 3577154331946287873LL;
unsigned char var_7 = (unsigned char)206;
unsigned long long int var_9 = 5565805229506921499ULL;
unsigned char var_11 = (unsigned char)23;
int var_13 = -1761858963;
int zero = 0;
int var_17 = -532575088;
unsigned long long int var_18 = 4677546754233221082ULL;
signed char var_19 = (signed char)-75;
unsigned short var_20 = (unsigned short)38260;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
