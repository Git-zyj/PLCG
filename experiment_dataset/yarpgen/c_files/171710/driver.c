#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1180011567;
long long int var_1 = 7003749162721089766LL;
int var_2 = -1500183511;
signed char var_3 = (signed char)20;
int var_6 = -1516833632;
unsigned char var_10 = (unsigned char)138;
int var_11 = 2048865986;
int zero = 0;
unsigned long long int var_12 = 3211397713232399386ULL;
long long int var_13 = 1542026157982442738LL;
short var_14 = (short)-5392;
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
