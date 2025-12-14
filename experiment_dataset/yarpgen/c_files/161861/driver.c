#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5929297112845529155LL;
signed char var_2 = (signed char)-27;
unsigned short var_5 = (unsigned short)24572;
unsigned long long int var_15 = 12885525195706933037ULL;
unsigned char var_17 = (unsigned char)19;
int zero = 0;
unsigned int var_18 = 1848953766U;
unsigned long long int var_19 = 7728664172134391708ULL;
unsigned long long int var_20 = 12718349393555307185ULL;
void init() {
}

void checksum() {
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
