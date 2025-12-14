#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-30786;
short var_1 = (short)-18346;
unsigned short var_2 = (unsigned short)31253;
unsigned short var_3 = (unsigned short)10290;
long long int var_4 = 2591022171682092082LL;
long long int var_7 = 7585089330823212318LL;
short var_9 = (short)-10060;
int zero = 0;
short var_10 = (short)-8897;
long long int var_11 = 1234350508172623448LL;
short var_12 = (short)-30854;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
