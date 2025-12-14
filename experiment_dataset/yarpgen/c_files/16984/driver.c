#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 433170515;
long long int var_3 = -5985751931983981777LL;
long long int var_4 = -8178922793582949137LL;
long long int var_6 = 4737778233205960550LL;
unsigned char var_8 = (unsigned char)25;
int var_9 = -1987680393;
int zero = 0;
int var_11 = 109228641;
unsigned short var_12 = (unsigned short)46193;
unsigned long long int var_13 = 16643464849877347758ULL;
unsigned char var_14 = (unsigned char)13;
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
