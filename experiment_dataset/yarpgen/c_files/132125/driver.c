#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-56;
signed char var_1 = (signed char)68;
signed char var_3 = (signed char)5;
unsigned int var_4 = 1534645528U;
signed char var_6 = (signed char)-47;
long long int var_7 = 5214655479860182568LL;
long long int var_9 = 7286219756528311481LL;
long long int var_10 = 2012515399852276904LL;
int zero = 0;
signed char var_11 = (signed char)-57;
long long int var_12 = -7230453391542694119LL;
long long int var_13 = 1620535551562542913LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
