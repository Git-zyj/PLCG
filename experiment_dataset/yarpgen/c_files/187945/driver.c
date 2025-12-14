#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)9424;
unsigned short var_5 = (unsigned short)53556;
unsigned short var_6 = (unsigned short)31963;
unsigned long long int var_10 = 4151974545706565171ULL;
unsigned long long int var_14 = 17045784078161328122ULL;
unsigned short var_17 = (unsigned short)22860;
int zero = 0;
unsigned long long int var_19 = 5905846423773856396ULL;
signed char var_20 = (signed char)65;
signed char var_21 = (signed char)-98;
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
