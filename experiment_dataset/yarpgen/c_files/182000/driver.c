#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10931244976800600378ULL;
short var_1 = (short)18262;
short var_2 = (short)-1043;
unsigned long long int var_4 = 7968477231215650803ULL;
int var_6 = 914665321;
short var_9 = (short)-23507;
int var_11 = -1496000662;
int zero = 0;
signed char var_12 = (signed char)-48;
int var_13 = -1455631122;
short var_14 = (short)-4997;
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
