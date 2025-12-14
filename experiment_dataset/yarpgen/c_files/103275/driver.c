#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)1513;
unsigned long long int var_2 = 7156562572802266320ULL;
unsigned short var_6 = (unsigned short)32430;
unsigned long long int var_7 = 13852474422740357595ULL;
unsigned short var_9 = (unsigned short)37118;
unsigned short var_10 = (unsigned short)57517;
unsigned long long int var_15 = 11005236142689438867ULL;
int zero = 0;
int var_17 = -1371106734;
unsigned short var_18 = (unsigned short)15536;
void init() {
}

void checksum() {
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
