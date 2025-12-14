#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-52;
signed char var_1 = (signed char)-53;
long long int var_2 = 7393296543756703634LL;
short var_3 = (short)-27720;
unsigned int var_4 = 2758459084U;
long long int var_5 = -7132895316577611591LL;
unsigned int var_6 = 2822460663U;
int var_7 = 784363061;
short var_8 = (short)-5022;
unsigned long long int var_9 = 13212893413069689604ULL;
int zero = 0;
short var_11 = (short)32007;
short var_12 = (short)-26188;
long long int var_13 = 9191903670079140024LL;
long long int var_14 = -1632333853481418657LL;
unsigned char var_15 = (unsigned char)184;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
