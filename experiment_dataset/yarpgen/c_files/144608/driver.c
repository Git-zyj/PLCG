#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-25812;
long long int var_6 = -1983115349479509928LL;
signed char var_12 = (signed char)79;
short var_18 = (short)7290;
int zero = 0;
unsigned long long int var_19 = 5421010858677416734ULL;
long long int var_20 = -249977371121692228LL;
unsigned long long int var_21 = 7901299401412583830ULL;
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
