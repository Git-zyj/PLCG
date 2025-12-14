#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -2839300398410798608LL;
long long int var_3 = -2825026470354730610LL;
long long int var_9 = 450664792106543839LL;
unsigned char var_10 = (unsigned char)169;
int var_11 = -1336550354;
short var_12 = (short)12316;
long long int var_16 = 4024818541884548664LL;
int zero = 0;
short var_19 = (short)24648;
unsigned short var_20 = (unsigned short)5952;
void init() {
}

void checksum() {
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
