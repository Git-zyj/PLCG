#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1784221487;
int var_1 = 1842201173;
short var_2 = (short)-27335;
unsigned char var_3 = (unsigned char)12;
short var_4 = (short)-1373;
long long int var_5 = -329884430387514058LL;
long long int var_6 = -6014739614379138353LL;
unsigned long long int var_8 = 1270454862130538652ULL;
signed char var_9 = (signed char)65;
long long int var_10 = 4144655408373458211LL;
unsigned long long int var_11 = 3214212116444022016ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)141;
long long int var_13 = -712752320691701566LL;
unsigned char var_14 = (unsigned char)72;
void init() {
}

void checksum() {
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
